#include <iostream>
using namespace std;
int main()
{
    int n,k,dose;
    cin>>n>>k;
    int height[n];
    for(int i=0;i<n;i++)
        cin>>height[i];
    int max=height[0];
    for(int i=0;i<n;i++)
    {
        if(max<height[i])
            max=height[i];
    }
    if(max<=k)
      dose=0;
    else
        dose=max-k;
    cout<<dose<<endl;
    return 0;
}
