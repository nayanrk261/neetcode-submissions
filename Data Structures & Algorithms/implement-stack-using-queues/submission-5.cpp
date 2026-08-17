class MyStack {
   public:
    deque<int> dq;
    MyStack() {}

    void push(int x) { dq.push_back(x); }

    int pop() {
        int r = dq.front();
        dq.pop_front();
        return r;
    }

    int top() {
        int t = dq.front();
        return t;
    }

    bool empty() {
        if (!dq.empty()) {
            return false;
        }
        return true;
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