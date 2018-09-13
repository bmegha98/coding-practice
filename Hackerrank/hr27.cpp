#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k;
         int count1=0;
        cin>>n>>k;
        int A[n];
        for(int j=0;j<n;j++)
        {  
            cin>>A[j];
            if(A[j]<=0)
                count1++;
        }
      if(count1>=k)
          cout<<"NO"<<endl;
      else 
          cout<<"YES"<<endl;
        
    }
    return 0;
}
