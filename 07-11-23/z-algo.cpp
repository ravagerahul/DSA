//string a string b
if(b.size()>h.size()) return -1;

for(int i=0;i<=h.size()-b.size();i++)
{
    if(h.substr(i,b.size())==b)
    {
        return i;
    }
}
return -1;