#include<iostream>
using namespace std;

int * Merge(int *A,int *B,int x)
{
    int size=x+1;
    int *C=new int[size];
  int a=0,c=0,b=0;
  while(a<x && b<1)
  {
     if(A[a]>B[b])
     {
       C[c]=A[a];
       c++;
       a++;
       }
       else if(A[a]<B[b])
       {
           C[c]=B[b];
           c++;
           b++;
           }
           else
           {
             C[c]=A[a];
             c++;
             a++;
             C[c]=B[b];
             b++;
             c++;
             }
}
while(a<x)
{
  C[c]=A[a];
  c++;
  a++;
} 
while(b<1)
{
C[c]=B[b];
c++;
b++;
}

return C;
}

int * climbingLeaderboard(int *scores, int *alice,int n)
{
      int *ret=new int[1];
    
      int *rank;
      int size=n+1,k=0;
      rank=new int[size];
      int *count=new int[size];
     
      rank=Merge(scores,alice,n);
      
     count[0]=1;
      for(int i=1;i<size;i++)
      {
       if(rank[i]==rank[i-1])
       {
        count[i]=count[i-1];
       
       }
       else
         count[i]=count[i-1]+1;
        
         }
         for(int i=0;i<1;i++)
         {
         for(int j=0;j<size;j++)
         {
                 if(alice[i]==rank[j])
                 {
                  ret[i]=count[j];
                  break;
                  }
                  }
                  }
      return ret;
     
     
}
int main()
{
    int *scores,*alice;
    int m,n;
    int *rank=new int[1];
    int *print=new int[m];
    cout<<"Enter the number of players on the leaderboard:  ";
    cin>>n;
    scores=new int[n];
    cout<<"Enter leaderboard scores in decreasing order "<<endl;
    for(int i=0;i<n;i++)
    cin>>scores[i];
    cout<<"Enter the number of games Alice plays:   ";
    cin>>m;
    alice=new int[m];
    cout<<"Enter scores of Alice "<<endl;
    for(int i=0;i<m;i++)
    {
    cin>>alice[i];
    int *send=new int[1];
     send[0]=alice[i];
    rank=climbingLeaderboard(scores,send,n);
    print[i]=rank[0];
    }
    cout<<endl;
   
 
  
    for(int i=0;i<m;i++)
     cout<<print[i]<<endl;
    system("pause");
    return 0;
}
