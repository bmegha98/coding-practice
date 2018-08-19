#include<iostream>
#include<vector>

using namespace std;
int getTotalX(int a[],int b[],int n,int m) 
{
    
    int count=0,k=0,f=0,C,D;
    int d[100];
      for(int i=1;i<=100;i++)
       { 
               int c=0;
               for(int j=0;j<n;j++)
               {
                       if(i%a[j]==0)
                       c++; 
                       }
                       C=c;
                       if(C==n)
                       {
                         d[k]=i;
                         k++;
                        }       
                       }
                                
      for(int j=0;j<k;j++)
       {
               int c=0;
               for(int i=0;i<m;i++)
               {
                       if(b[i]%d[j]==0)
                       c++;
                       }
                       D=c;
                       if(D==m)
                       count++;
                       }
                     

    return count;
}

int main()
{
    int n,m;
    cout<<"Enter size of first :  ";
    cin>>n;
     cout<<"Enter size of second :  ";
     cin>>m;
  int A[n],B[m];
    for(int i=0;i<n;i++)
        cin>>A[i];
    for(int i=0;i<m;i++)
        cin>>B[i];
    int x=getTotalX(A,B,n,m);
    cout<<x<<endl;
    system("pause");
    return 0;
}
    
