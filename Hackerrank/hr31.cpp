#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int c[n],e=100;
    for(int i=0;i<n;i++)
        cin>>c[i];
    for(int i=0;i<n;i+=k)
    {
       if(c[i]==0)
           e--;
        else
            e-=3;
    }
    cout<<e<<endl;
    return 0;
}
