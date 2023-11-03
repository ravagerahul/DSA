int next(int price) {
    int span=1;
    if(st.empty())
    {
        st.push({price,1});

    }
    else
    {
    while(!st.empty() && st.top()<=price)
    {
        span=span+st.top()->second;
        st.pop();
    }
         st.push({price,span});

    }

   

    return span;

}