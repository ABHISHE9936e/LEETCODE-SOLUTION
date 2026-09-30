class MinStack {
public:
   stack<long long> st;
   long long min = INT_MAX;
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty()){
                   min = value;
                st.push(value);
        }
        else{
            if(value<min){
                st.push(2LL * value - min);
                min = value;
                min = value;
            }
            else{
                st.push(value);
            }
        }
    }
    
    void pop() {
        if(min>st.top()){
    min = 2*min-st.top();
            }
            st.pop();
    }
    
    int top() {
       if(min>st.top()) return min;
       return st.top();
    }
    
    int getMin() {
       return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */