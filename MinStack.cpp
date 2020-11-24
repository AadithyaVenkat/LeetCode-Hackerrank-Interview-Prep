class MinStack {
public:
    /** initialize your data structure here. */
    
    stack<int> st;
    stack<int> mn;
    
    MinStack() {
        
    }
    
    void push(int x) {
        
        st.push(x);
        if(mn.empty() || mn.top()>=x)
            mn.push(x);
        
    }
    
    void pop() {
        
       if(st.top()==mn.top()) mn.pop();
        st.pop();
        
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() 
    {
          return mn.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
