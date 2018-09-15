#include <iostream>
#include <math.h>
using namespace std;
/*long int  viralAdvertising(int n)
{
    if(n==1)
        return floor(5/2);
    else
        return floor((3*n)/2)+viralAdvertising(n-1);
}*/
int main()
{
    int n;
    cin>>n;
   // cout<< viralAdvertising(n)<<endl;
    int people=5,t=0,lik=0;
    for(int i=0;i<n;i++)
    {
        lik=people/2;
        t+=lik;
        people=lik*3;
    }
    cout<<t<<endl;
    return 0;
}
