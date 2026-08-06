class MyStack {
   public:
    deque<int> dqe;
    MyStack() {}

    void push(int x) {
        dqe.push_back(x);
        for (int i = 0; i < dqe.size() - 1; i++) {
            int x = dqe.front();
            dqe.pop_front();
            dqe.push_back(x);
        }
    }

    int pop() {
        int r = dqe.front();
        dqe.pop_front();
        return r;
    }

    int top() {
        int t = dqe.front();
        return t;
    }

    bool empty() {
        if (!dqe.empty()) {
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