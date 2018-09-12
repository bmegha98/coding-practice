#include <iostream>
using namespace std;
  
int  climbingLeaderboard(int *scores, int alice,int n)
{
      int ret;
      int size=n+1,k=0,pos=0;
     int *C=new int[size];
     C=scores;
      int *count=new int[size];
     
     for(int i=0;i<n;i++)
        if(C[i]>=alice && C[i+1]<alice)
        {
           pos=i+1;
            break;
        }
    for(int i=n+1;i>pos;i--)
        C[i]=C[i-1];
    C[pos]=alice;
      
     count[0]=1;
      for(int i=1;i<size;i++)
      {
       if(C[i]==C[i-1])
       {
        count[i]=count[i-1];
       
       }
       else
         count[i]=count[i-1]+1;
        
         }
       
         for(int j=0;j<size;j++)
         {
              if(alice==C[j])
                 {
                 ret=count[j];
                  break;
                  }
                  }
      return ret;
     
     
}
int main()
{
    int *scores,*alice;
    int m,n;
    int *print=new int[m];
  //  cout<<"Enter the number of players on the leaderboard:  ";
    cin>>n;
    scores=new int[n];
  //  cout<<"Enter leaderboard scores in decreasing order "<<endl;
    for(int i=0;i<n;i++)
    cin>>scores[i];
  //  cout<<"Enter the number of games Alice plays:   ";
    cin>>m;
    alice=new int[m];
 //   cout<<"Enter scores of Alice "<<endl;
    for(int i=0;i<m;i++)
    {
    cin>>alice[i];
  int rank=climbingLeaderboard(scores,alice[i],n);
    print[i]=rank;
    }
  
    for(int i=0;i<m;i++)
     cout<<print[i]<<endl;
   
    return 0;
}
