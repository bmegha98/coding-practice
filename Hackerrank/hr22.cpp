#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n],B[100];
    for(int i=0;i<100;i++)
     B[i]=0;
    
    for (int i = 0; i < n; i++)
        cin>>A[i];
   
    for(int i=0;i<n;i++)
    {  
            int k=i*2;
        for(int j=0;j<n;j++)
        {
            if(A[i]==A[j] || A[i]==A[j]+1)
             B[k]++;
             if(A[i]==A[j] || A[i]==A[j]-1)
             B[k+1]++;
        }
      
    }
    for(int i=0;i<100;i++)
   {
            if(B[0]<B[i])
            B[0]=B[i];
            }
            cout<<B[0]<<endl;
  system("pause");
    return 0;
}

