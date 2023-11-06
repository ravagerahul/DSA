            // string s

            int i=0;
            while(s[i]==' ')
            {
                i++;
            }

            bool flag=false;

            if(s[i]=='-')
            {
                flag=true;
                i++;
            }
            else if(s[i]=='+')
            {
                i++;
            }
            long long num=0;
            for(;i<s.size();i++)
            {
                if(num>INT_MAX)
                {
                    if(flag)
                    {
                        return INT_MIN;
                    }
                    else
                    {
                        return INT_MAX;
                    }
                }
                if(s[i]>=48 && s[i]<=57)
                {
                    num=num*10+(s[i]-48);
                }
                else
                {
                    break;
                }
            }
    int ans;
             if(flag)
        {
            ans=INT_MIN;
            num*=-1;
            return (ans>num)?ans:num;
        }
        else
        {
            ans=INT_MAX;
            return (ans<num)?ans:num;
        }
    }