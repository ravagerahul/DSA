vector<int> maxMinWindow(vector<int> a, int n) {
    // Write your code here.
    stack<int> s,s1;
    vector<int> left(n,-1);
    vector<int> right(n,n);

    for(int i=0;i<n;i++)
    {
        while(!s.empty() && a[s.top()]>=a[i])  s.pop();

        if(!s.empty()) left[i]=s.top();

        s.push(i);
    }

    for(int i=n-1;i>=0;i--)
    {
        while(!s1.empty() && a[s1.top()]>=a[i])  s1.pop();

        if(!s1.empty()) right[i]=s1.top();

        s1.push(i);
    }

    vector<int> ans(n+1,0);

    for(int i=0;i<n;i++)
    {
            int len=right[i]-left[i]-1;

            ans[len]=max(ans[len],a[i]);
    }

    
    vector<int> res(n);

    for(int i=n-1;i>=1;i--)
    {
        ans[i]=max(ans[i+1],ans[i]);
    }
    for(int i=1;i<=n;i++)
    {
        res[i-1]=ans[i];
    }

    return res;
}