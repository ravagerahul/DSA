//string s

int num=0;
int n=s.size();
for(int i=0;i<s.size();i++)
{
    int numi=0;
    if(s[i]=='I')
    {
        if(i!=n-1 && s[i+1]=='V')
        {
            numi=4;
            i++;
        }
        else if(i!=n-1 && s[i+1]=='X')
        {
            numi=9;
            i++;
        }
        else
        {
            numi=1;
        }
    }
    else if(s[i]=='X')
    {
        if(i!=n-1 && s[i+1]=='L')
        {
            numi=40;
            i++;
        }
        else if(i!=n-1 && s[i+1]=='C')
        {
            numi=90;
            i++;
        }
        else
        {
            numi=10;
        }
    }
    else if(s[i]=='C')
    {
        if(i!=n-1 && s[i+1]=='D')
        {
            numi=400;
            i++;
        }
        else if(i!=n-1 && s[i+1]=='M')
        {
            numi=900;
            i++;
        }
        else
        {
            numi=100;
        }
    }
    else if(s[i]=='V')
    {
        numi=5;
    }
    else if(s[i]=='L')
    {
        numi=50;
    }
    else if(s[i]=='D')
    {
        numi=500;
    }
    else
    {
        numi=1000;
    }
    num=num+numi;
}

return num;