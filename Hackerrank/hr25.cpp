#include <iostream>
using namespace std;
int Maximum(int A[],int n)
{
    int max=A[0];
    for(int i=0;i<n;i++)
    {
        if(max<A[i])
            max=A[i];
    }
    return max;
}
int main()
{
    int h[26],A[26],k=97,j=0;
    string word;
    for(int i=0;i<26;i++)
    {
        cin>>h[i];
      A[i]=k;
       k++;
    }
       cin>>word;
    int l=word.length();
     int FArea[l];
  
    for(int i=0;i<l;i++)
    {
        int x=int(word[i]);
        for(int i=0;i<26;i++)
        {
            if(x==A[i])
            {
             FArea[j]=h[i];
              j++;
              break;
            } 
        }
    }
    int len=Maximum(FArea,j);
     cout<<len*l<<endl;
    return 0;
     
}
