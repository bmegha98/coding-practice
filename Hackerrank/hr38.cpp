#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
     vector<int> temp(n,0);
    for(int i=0;i<n;i++)
    {
         int Arr;
        cin>>Arr;
        ++temp[Arr%k];
    }
    int count=0;
    for(int i=0;i<=k/2;i++)
    {
    if (i == 0 || (2*i == k)) 
    {
      if (temp[i]) 
      count += 1;
    } 
    else 
    {
      count += max(temp[i], temp[k - i]);
    }
  }
    cout<<count<<endl;
    return 0;
}
