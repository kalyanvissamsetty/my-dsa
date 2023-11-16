class MyQueue {
public:
    stack<int> s1,s2;
    int curr = -1;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(s1.size() == 0){
            curr = x;
        }
        s1.push(x);
            
    }
    
    int pop() {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int h = s2.top();
        s2.pop();
        if(s2.size()>=1)
            curr = s2.top();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return h;
    }
    
    int peek() {
        return curr;   
    }
    
    bool empty() {
        return s1.empty();
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