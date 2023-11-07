// string str
int i=0;
int j=s.size()-1;
int last=s.size()-1;


while(i<=j)
{
    if(s[i]==s[j])
    {
        i++;
        j--;
    }
    else
    {
        last--;
        j=last;
        i=0;
    }
}

return s.size()-last-1;
