class Solution {
public:
bool exist(string s,string b)
{
    int n=s.size()-b.size();
    for(int i=0;i<=n;i++)
    {
        if(s.substr(i,b.size())==b)
        {
            return true;
        }
    }
    return false;
}
    int repeatedStringMatch(string a, string b) {
        int len1=a.size();
        int len2=b.size();
        int n=len2/len1;

        string s="";

        int i=n;
        while(i!=0)
        {
            s=s+a;
            i--;
        }

        if(exist(s,b))
        {
            return n;
        }
         s=s+a;
         if(exist(s,b))
        {
            return n+1;
        }
         s=s+a;
         if(exist(s,b))
        {
            return n+2;
        }
         return -1;
    }
};