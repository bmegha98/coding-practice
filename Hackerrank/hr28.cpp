#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
    int min,max,k;
    cin>>min>>max>>k;
    int count=0;
    for(int p=min;p<=max;p++)
    {
        string temp=to_string(p);
       reverse(temp.begin(),temp.end());
       if(abs(p-stoi(temp))%k==0)count++;
    }
    cout<<count<<endl;
  return 0;  
}
