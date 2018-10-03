# include<iostream>
using namespace std;
    
bool Check(string s,string t,int k)
{
    if(s.length()+t.length()<=k)
       return true;
    int i=0;
    for( ;i<s.length() && i<t.length();i++)
    {
        if(s[i]!=t[i])
            break;
    }
    int m=(s.length()-i)+(t.length()-i);
    if(m<=k && (k-m)%2==0)
        return true;
    else 
        return false;
}
int main()
{
    string s,t,p;
    int k,count=0;
    cin>>s;
    cin>>t;
    cin>>k;
    if(Check(s,t,k))
        cout<<"Yes"<<endl;
    else 
        cout<<"No"<<endl;
    return 0;
}
