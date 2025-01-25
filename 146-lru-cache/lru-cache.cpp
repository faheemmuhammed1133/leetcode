class LRUCache {
public:
    class node{
    public:
        int key;
        int val;
        node* next;
        node* prev;
        
        node( int key , int val)
        {
            this->key = key;
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
            
        }
    };

    unordered_map<int,node*>mp;
    int capacity;
   
//two dummy nodes to keep track starting and ending point of list  
    node * head = new node(0,0);
    node * tail = new node(0,0);

     
    
    LRUCache(int capacity) {
        this->capacity=capacity;
        head->next=tail;
        tail->prev=head;
        
    }
    // function to help a node in the next to head [can say front of our list]
    void insert ( node* curr)
    {
        curr->next = head->next;                      
        curr->next->prev = curr;
        head->next= curr;
        curr->prev= head;
        mp[curr->key]=curr;                       //update map accordingly
    }
    
   
// function to remove a node 
    void remove(node* curr)
    {
        mp.erase(curr->key);
        curr->next->prev =curr->prev;
        curr->prev->next=curr->next;
        
       
    }

    int get(int key) 
    {
       // if not,return -1;
        if(mp.find(key)==mp.end())
        {
            return -1;
        }
        
        node *currnode = mp[key];
        remove(currnode);
        insert(currnode);
        return currnode->val;
        
    }

    
     void put(int key, int value)
    {
       
        if(mp.find(key)!=mp.end())
        {
            remove(mp[key]);
        }
        
        if(mp.size()==capacity)
        {
            remove(tail->prev);
        }
        insert(new node(key,value));
        
    }

};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */