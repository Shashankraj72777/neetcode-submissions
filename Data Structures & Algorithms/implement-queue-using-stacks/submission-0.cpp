class MyQueue {
public:
    stack<int> inStack;
    stack<int> outStack;

    MyQueue() {
        
    }

    void push(int x) {
        inStack.push(x);
    }

    void move() {
        if (outStack.empty()) {
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
    }

    int pop() {
        move();
        int x = outStack.top();
        outStack.pop();
        return x;
    }

    int peek() {
        move();
        return outStack.top();
    }

    bool empty() {
        return inStack.empty() && outStack.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */