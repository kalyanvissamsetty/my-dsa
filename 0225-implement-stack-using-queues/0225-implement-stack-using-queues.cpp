class MyStack {
public:
    queue<int> q1,q2;
    int curr = 0;
    MyStack() {
        
    }
    
    void push(int x) {
        curr = x;
        q1.push(x);
    }
    
    int pop() {
        
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1 = queue<int>();  
        while(q2.size()!=1){
            q1.push(q2.front());
            curr = q2.front();
            q2.pop();
            
        }
        int h = q2.front();
        q2 = queue<int>();
        
        return h;
    }
    
    int top() {
        return curr;
    }
    
    bool empty() {
        return q1.empty();
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