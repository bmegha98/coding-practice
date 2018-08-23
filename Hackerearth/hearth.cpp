#include<iostream>
using namespace std;

int main()
{
    int T;
    cout<<"Enter number of queries : ";
    cin>>T;
    for(int i=0;i<T;i++)
    {
            int D,M,A,B,X,months=0;
            
            cout<<"Enter bal in account(D) : ";
            cin>>D;
            cout<<"Enter months(M) : ";
            cin>>M;
            cout<<"Enter interest in M months(A) : ";
            cin>>A;
            cout<<"Enter interest in (M+1)th month(B) :  ";
            cin>>B;
            cout<<"Enter desired amount in account(X) :  ";
            cin>>X; 
            
     if(D>=X)
     months=0;
     else
     {
         int sum=0;
         while(sum+D<X)
         {
         for(int j=0;j<M;j++)
         {
                sum+=A;
                 months++;
                if(sum+D>X)
                 break;
          }
                 if(sum+D<X)
                  {
                           sum+=B;
                           months++;
                  }
                  else 
                  break;
          } 
                  
      }
                 cout<<"Months "<<months<<endl;
                  }
                 return 0;
                 }
         
                
     
