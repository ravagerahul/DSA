class MinStack {
public:
stack<long long int> s;
int mini=INT_MAX;
    MinStack() {
        
    }
    
    void push(int value) {
        long long int val=value;
        if(s.empty())
        {
            s.push(val);
            mini=val;
        }
        else
        {
            if(val<mini)
            {
                int x=2*val-mini;
                st.push(x);
                mini=val;
            }
            else
            {
                st.push(val);
            }
        }
    }
    
    void pop() {

        if(!s.empty())
        {
            int x=s.top();
            s.pop();
            if(x<mini)
            {
                mini=2*mini-x;
            }
        }
        
    }
    
    int top() {
        if(s.empty()) return -1;

        else
        {
            int v=s.top();
            if(v<mini)
            {
                return mini;
            }
            else
            {
                return v;
            }
        }
    }
    
    int getMin() {
        return mini;
    }
};

