class MinStack {
public:
stack<int>mainStack;
stack<int>minStack;

    MinStack() {
        
    }
    
    void push(int val) {
        mainStack.push(val);
        if(minStack.empty()){
            minStack.push(val);
        }
        else{
            minStack.push(min(minStack.top(), val));
        }
    }
    
    void pop() {
        mainStack.pop();
        minStack.pop();
    }
    
    int top() {
        if(!mainStack.empty()){
            return mainStack.top();
        }
    }
    
    int getMin() {
        if(!minStack.empty()){
            return minStack.top();
        }
    }
};
