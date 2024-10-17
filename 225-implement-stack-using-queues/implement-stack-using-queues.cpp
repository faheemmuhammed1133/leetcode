class MyStack {
    vector<int> res;
public:
    MyStack() {
    }
    
    void push(int x) {
        cout<<x;
        
        res.push_back(x);
        
    }
    
    int pop() {
        int a=res[res.size()-1];
        res.erase(res.end());
        return a;
        // return 0;
    }
    
    int top() {
        return res[res.size()-1];
        // return 0;
    }
    
    bool empty() {
        if(res.size()>0)
        // if(1>0)
            return false;
        else{
            return true;
        }
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */