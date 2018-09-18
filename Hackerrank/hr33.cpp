#include <iostream>
using namespace std;
int Match(int A[],int n,int x)
{
    int ret;
    for(int i=0;i<n;i++)
    {
        if(x==A[i])
            ret= i;
    }
    return ret+1;
}
int main()
{
    int n;
    cin>>n;
    int p[n];
    for(int i=0;i<n;i++)
        cin>>p[i];
    for(int x=1;x<=n;x++)
    {
       int temp=Match(p,n,x);
        int y=Match(p,n,temp);
        cout<<y<<endl;
    }
    return 0;
}
