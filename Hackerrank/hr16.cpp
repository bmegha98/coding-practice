#include<iostream>
using namespace std;
int main()
{
    int A[6][6],sum[16],k=0,max;
    for(int i=0;i<16;i++)
     sum[i]=0;
    cout<<"Enter array (6 rows,6 cols) "<<endl;
    for(int i=0;i<6;i++)
    for(int j=0;j<6;j++)
    cin>>A[i][j];
  for(int i=0;i<4;i++)
  { 
          int p=i+1,q=i+2;
   for(int j=0;j<4;j++)
   {
    int t=j+1;
    for(int m=j;m<j+3;m++)
    {
      sum[k]+=A[i][m];
      sum[k]+=A[q][m];
      }
       sum[k]+=A[p][t];
        k++;
      }
      }
  max=sum[0];
  for(int i=0;i<k;i++)
  {
          if(max<sum[i])
          max=sum[i];
          }
          cout<<"max "<<max<<endl;
    system("pause");
    return 0;
}
