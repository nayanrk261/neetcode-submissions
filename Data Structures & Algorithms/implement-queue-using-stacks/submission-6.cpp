class MyQueue {
   public:
    stack<int> st;
    stack<int> st2;

    MyQueue() {}

    void push(int x) {
        if (!st.empty()) {
            for (int i = 0; i < st.size(); i++) {
                int val = st.top();
                st.pop();
                st2.push(val);
            }
            st.push(x);
        } else {
            st.push(x);
        }
    }

    int pop() {
        if (!st2.empty()) {
            int val = st2.top();
            st2.pop();
            return val;
        }
        int val = st.top();
        st.pop();
        return val;
    }

    int peek() {
        if (!st2.empty()) {
            int val = st2.top();
            return val;
        }
        int val = st.top();
        return val;
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