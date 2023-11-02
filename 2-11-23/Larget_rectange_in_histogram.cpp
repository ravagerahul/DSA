#include<bits/stdc++.h>
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
         stack<int> s;
        int ans=0;
        for(int i=0;i<=h.size();i++)
        {
            while(!s.empty() && (i==h.size() || h[s.top()]>=h[i]))
            {
                int ht=h[s.top()];
                s.pop();
                int wid;
                if(s.empty())
                {
                    wid=i;
                }
                else
                {
                    wid=i-s.top()-1;
                }
                ans=max(ans,wid*ht);
            }
            s.push(i);
        }
        return ans;
    }
};