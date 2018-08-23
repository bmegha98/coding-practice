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
    
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<m;j++)
     {
     if(key[i]+usb[j]<=b)
      spent=max(spent,key[i]+usb[j]);
       }
       }
     
         cout<<spent<<endl;
       
     
     
     system("pause");
     return 0;
     }
     

    
    
