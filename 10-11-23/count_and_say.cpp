if(n==1)
        {
            return "1";
        }

        string s=countAndSay(n-1);

        string res="";
        int count=0;

        for(int i=0;i<s.size();i++)
        {
            count++;
            if(i==s.size()-1 || s[i]!=s[i+1])
            {
                    char a=count+48;
                    res=res+a+s[i];
                    count=0;
            }

        }
        return res;
    }