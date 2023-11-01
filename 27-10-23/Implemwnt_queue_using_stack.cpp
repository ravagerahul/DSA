class MyQueue {
public:
    stack<int> input,output;
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(output.empty())
        {
            while(!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
        }
        int x= output.top();
        output.pop():
        return x;
    }
    
    int peek() {
         if(output.empty())
        {
            while(!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }
    
    bool empty() {
        int size=output.size()+input.size();
        return (size==0);
    }
};