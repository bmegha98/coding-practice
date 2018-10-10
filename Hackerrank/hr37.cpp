#include <iostream>
#include <vector>
using namespace std;
int MinElement(vector<int> A)
{
    int min=A[0];
    for(int i=0;i<A.size();i++)
    {
        if(min>A[i])
            min=A[i];
    }
    return min;
}
int Zero(vector<int> A)
{
    int c=0;
   for(int i=0;i<A.size();i++)
    {
        if(A[i]==0)
            c++;
   }
    return c;
}
int Pos(vector<int> A)
{
    int pos;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==0)
        {
            pos=i;
           break;
        }
    }
    return pos;
}
int main()
{
    int n,k=1;
    cin>>n;
    vector<int> len_array(n);
    vector<int> count(n);
    count[0]=n;
    for(int i=0;i<n;i++)
          cin>>len_array[i];
   
    while(len_array.size()>0)
    {
       int min=MinElement(len_array);       
    for(int i=0;i<len_array.size();i++)
        len_array[i]=len_array[i]-min;
         
       int temp=Zero(len_array);        
        for(int i=0;i<temp;i++)
        {
            int p=Pos(len_array);           
            len_array.erase(len_array.begin()+p);
        }
       
           count[k]=len_array.size();
        k++;
        
    }
    for(int i=0;i<k;i++)
    {
        if(count[i]!=0)cout<<count[i]<<endl;
    }
        
    
   return 0; 
    
}
