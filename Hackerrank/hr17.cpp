#include<iostream>
using namespace std;

int main()
{
    int n;
    string s;
    int level=0,num_valley=0;
    cout<<"Enter number of steps : ";
    cin>>n;
    cout<<"Enter path(using U or D)  "<<endl;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
     if(s[i]=='U')
       level++;
     else
     {
       if(level==0)num_valley++;
       level--;
       }
      }
      
    cout<<num_valley<<endl; 
      system("pause");
      return 0;
      }
        
