class solution{
    public:
    void insert(stack<int> &st,int x)
    {
        if(st.empty() || st.top()<x)
        {
            st.push(x);
            return;
        }

        int t=st.top();

        st.pop();

       
            insert(st,x);
        

        st.push(t);
    }
    void sort(stack<int> &s)
    {
        if(s.empty())
        {
            return;
        }

        int x=s.top();
        s.pop();

        sort(s);

       
            insert(s,x);
        
    }
};