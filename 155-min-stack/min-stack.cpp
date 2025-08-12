class MinStack {
public:

    // using a pair stack

    // Time O(1)
    // Space O(2N) Since, we are using a pair

    stack<pair<int,int>> steck;

    MinStack() {}
    
    void push(int val) {

        if(steck.empty())
        {
            steck.push({val,val});
        }
        else
        {
        steck.push({val,min(val,steck.top().second)});
        }
    }
    
    void pop() {

        steck.pop();
        
    }
    
    int top() {
        
        return steck.top().first;
    }
    
    int getMin() {
        
        return steck.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */