string reverseWords(string s) {
        int i=0;
        int n=s.size();
        string res="";

        while(i<n)
        {
            while(i<n && s[i]==' ')
            {
                i++;
            }
            if(i>=n)  break;

            string word;
            int j=i;

            while(j<n && s[j]!=' ')
            {
                word=word+s[j];
                j++;
            } 

            if(res=="")
            {
                res=res+word;
            }
            else
            {
                res=word+' '+res;
            }
            i=j+1;
        }
        return res;
    }