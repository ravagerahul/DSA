//string s1 string s2

int m=s1.size();
int n=s2.size();

vector<vector<int>> dp(m+1,vector<int>(n+1,0));

for(int i=1;i<=m;i++)
{
    for(int j=1;j<=n;j++)
    {
        if(s1[m-i]==s2[n-j])
        {
            dp[i][j]=1+dp[i-1][j-1];
        }
        else
        {
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }

}

return dp[m][n];