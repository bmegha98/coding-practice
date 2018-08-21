#include<iostream>
using namespace std;
int main()
{
    int n,p,min1=0,min2=0,min;
    cout<<"Enter number of pages : ";
    cin>>n;
    cout<<"Enter page number to turn to : ";
    cin>>p;
    if(p==1 || p==n)
    min=0;
    else
    {
        min1=p/2;
         min2=(n/2)-min1;
         if(min1<min2)
         min=min1;
         else
         min=min2;
        }
        cout<<"min "<<min<<endl;
     system("pause");
     return 0;
     }
