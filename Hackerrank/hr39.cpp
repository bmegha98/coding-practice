#include <iostream>
using namespace std;

long long int Occurrence(string s,long long int n)
{
    int len=s.length();
    long long int count=0;
    int i=0,l=len;
     if(len==1)
     {
      if(s[0]=='a')
        return n;
      else
          return 0;
     }
    for(int i=0;i<len;i++)
    {
        if(s[i]=='a')
            count++;
    }
     long long int p=n/len;
    long long int rem=n%len;
    count*=p;
    for(int i=0;i<rem;i++)
    {
        if(s[i]=='a')
            count++;
    }
    return count;
}
int main()
{
    string s;
    cin>>s;
    long long int n;
    cin>>n;
    long long  int occ=Occurrence(s,n);
    cout<<occ<<endl;
}


/* TLE for some cases

#include <iostream>
using namespace std;

long long int Occurrence(string s,long long int n)
{
    int len=s.length(),count=0;
    int i=0,l=len;
     if(len==1)
     {
      if(s[0]=='a')
        return n;
      else
          return 0;
     }
    
    if(n<=len)
       len=n;
    
    else
    while(l<n)
    {
        int temp=s[i%len];
        if(temp=='a')
          count++;
        s+=temp; 
         l=s.length();
        i++; 
    }
    
    for(int i=0;i<len;i++)
    {
        if(s[i]=='a')
            count++;
    }
    return count;
    
}
int main()
{
    string s;
    cin>>s;
    long long int n;
    cin>>n;
    long long  int occ=Occurrence(s,n);
    cout<<occ<<endl;
}
*/
