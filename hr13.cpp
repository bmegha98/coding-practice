#include<iostream>

using namespace std;
int main()
{
    int n;
    int count=0;
    cout<<"Enter number of socks : ";
    cin>>n;
    int A[n];
    int C[101],k=0;
    for(int i=0;i<n;i++)
    cin>>A[i];
    for(int i=0;i<100;i++)
    C[i]=0;
 for(int i=1;i<=100;i++)
    {
    for(int j=0;j<n;j++)
    {
      if(i==A[j])
       C[i]++;
       }
       }
     
       for(int i=0;i<=100;i++)
       {
               if(C[i]!=0)
       cout<<"Number of socks of type "<<i<<" are "<<C[i]<<endl;
       }
      
     for(int i=0;i<=100;i++)
     {
              int n;
             if(C[i]!=0)
             {
               if(C[i]%2==0)
               {
                n=C[i]/2;
               count+=n;
               }
               else
               {
                   n=C[i]/2;cout<<"quotient "<<n<<endl;
                 count+=n;
               }
               }
}
    cout<<"count "<<count<<endl;
    
    system("pause");
    return 0;
}
      
            
    
