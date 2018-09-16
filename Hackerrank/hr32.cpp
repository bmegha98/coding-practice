#include <iostream>
using namespace std;

int main()
{
    int n,k,q;
    cin>>n>>k>>q;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        b[(i+k)%n]=a[i];
    for(int i=0;i<q;i++)
    {
        int t;
        cin>>t;
        cout<<b[t]<<endl;
    }
    
    return 0;
}
