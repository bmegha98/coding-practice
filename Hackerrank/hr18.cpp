#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int b,n,m;
    cout<<"Enter number of keyboard models  ";
    cin>>n;
    int key[n];
    cout<<"Enter prices of keyboard "<<endl;
    for(int i=0;i<n;i++)
    cin>>key[i];
    
    cout<<"Enter number of USB models  ";
    cin>>m;
    int usb[m];
    cout<<"Enter prices of USB "<<endl;
    for(int i=0;i<m;i++)
    cin>>usb[i];
    
    cout<<"Enter budget of Monica  ";
    cin>>b;
    
    int spent=-1;
    int sum[m*n],k=0;
    
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<m;j++)
     {
     if(key[i]+usb[j]<=b)
     {
      sum[k]=key[i]+usb[j];
      k++;
      }
       }
       }
       for(int i=0;i<k;i++)
       {
        if(sum[i]>spent)
        spent=sum[i];
        }
    
         cout<<spent<<endl;
   
     system("pause");
     return 0;
     }
     

    
    
