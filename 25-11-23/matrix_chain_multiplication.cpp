// vector<int> arr

int n=arr.size();

vector<vector<int>> dp(n,vector<int>(n,0));

for(int i=0;i<n;i++)
{
    dp[i][i]=n;
}

for(int i=n-1;i>=1;i--)
{
    for(int j=i+1;j<n;j++)
    {
        int mini=INT_MAX;
        for(int k=i;k<j;k++)
        {
            int sum=arr[i-1]*arr[k]*arr[j]+dp[i][k]+dp[k+1][j];
            mini=min(mini,sum);
        }
        dp[i][j]=mini;
    }
}

return dp[1][n-1];