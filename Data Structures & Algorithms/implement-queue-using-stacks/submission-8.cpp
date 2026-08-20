class MyQueue {
   public:
    stack<int> st;
    stack<int> st2;
    MyQueue() {}

    void push(int x) { st.push(x); }

    int pop() {
        if (st2.empty()) {
            while (!st.empty()) {
                int val = st.top();
                st.pop();
                st2.push(val);
            }
        }

        int val = st2.top();
        st2.pop();
        return val;
    }

    int peek() {
        if (st2.empty()) {
            while (!st.empty()) {
                int val = st.top();
                st.pop();
                st2.push(val);
            }
        }

        return st2.top();
    }
    bool empty() { return st.empty() && st2.empty(); }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */