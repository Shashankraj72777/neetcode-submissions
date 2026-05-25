class MinStack {
public:

    stack<int> st;

    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        stack<int> temp = st;

        int minimum = INT_MAX;

        while(!temp.empty()){
            minimum = min(minimum, temp.top());
            temp.pop();
        }
        return minimum; 
    }
};