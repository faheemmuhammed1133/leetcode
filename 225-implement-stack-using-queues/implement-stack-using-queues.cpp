class MyStack {
    vector<int> res;
public:
    
    void push(int x) {
        res.push_back(x);  
    }
    
    int pop() {
        int a=res.back();
        res.pop_back();
        return a;
    }
    
    int top() {
        return res.back();
    }
    
    bool empty() {
        return res.empty();
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