int id1=0;
        int id2=0;

        while(1)
        {
            long long num1=0;
            long long num2=0;

            while(id1<version1.size() && version1[id1]!='.')
            {
                num1=num1*10+(version1[id1]-'0');
                id1++;
            }
            while(id2<version2.size() && version2[id2]!='.')
            {
                num2=num2*10+(version2[id2]-'0');
                id2++;
            }

            if(num1>num2)  return 1;

            if(num1<num2) return -1;

            if(id1>=version1.size() && id2>=version2.size())  return 0;

            id1++;
            id2++;
        }

        return 0;