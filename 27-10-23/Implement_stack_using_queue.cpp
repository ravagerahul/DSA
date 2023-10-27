class MyStack {
public:
    queue<int> q;
    
    MyStack() {
        
    }
    
    void push(int x) {
        if(q.size()==0)
        {
            q.push(x);
        }
        else
        {
        int size=q.size();
        q.push(x);
        for(int i=size;i>0;i--)
        {
            int n=q.front();
            q.pop();
            q.push(n);

        }
        }    
    }
    
    int pop() {
        int x=q.front();
        q.pop();
        return x;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        
        return (q.size()==0);
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