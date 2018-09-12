#include <iostream>
using namespace std;

int Height(int n)
{
    if(n==0)
        return 1;
    else if(n%2!=0)
         return 2*Height(n-1);
    else 
        return 2*Height(n-2)+1;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,H;
        cin>>n;
        H=Height(n);
        cout<<H<<endl;
        
    }
    return 0;
}
