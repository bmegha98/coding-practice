#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    { 
        int res;
        int n,m,s;
        cin>>n>>m>>s;
        res=1+(m-1+s-1)%n;
        cout<<res<<endl;
    }
    return 0;
}
