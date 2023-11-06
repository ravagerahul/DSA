//strs

// sort(strs.begin(),strs.end());
// int count=0;
// int n=strs.size();
// for(int i=0;i<n;i++)
// {
//     if(strs[0][i]==strs[n-1][i])
//     {
//         count++;
//     }
// }
// return count;

 sort(strs.begin(),strs.end());
                    string ans="";
                    int n=strs.size();
                    for(int i=0;i<strs[0].size();i++)
                    {
                        if(strs[0][i]==strs[n-1][i])
                        {
                            ans=ans+strs[0][i];
                        }
                        else
                        {
                            break;
                        }
                    }
                    return ans;