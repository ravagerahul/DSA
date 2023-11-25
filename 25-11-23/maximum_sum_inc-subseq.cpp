 int maxi=0;
	    vector<int> dp(n,0);
	    dp[0]=arr[0];
	    for(int i=0;i<n;i++)
	    {
	        dp[i]=arr[i];
	        for(int j=0;j<i;j++)
	        {
	            if(arr[i]>arr[j])
	            {
	                int sum=arr[i]+dp[j];
	                dp[i]=max(dp[i],sum);
	            }
	        }
	        maxi=max(maxi,dp[i]);
	    }
	    return maxi;