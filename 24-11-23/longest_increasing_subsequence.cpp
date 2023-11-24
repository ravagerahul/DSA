// vector<int> nums;

int n=nums.size();
vector<int> dp(n,1);

for(int i=0;i<n;i++)
{
    for(int j=0;j<i;j++)
    {
        if(nums[j]<nums[i])
        {
            int count=1+v[j];
            v[i]=max(v[i],count);
        }
    }
    maxi=max(maxi,v[i]);
}
return maxi;