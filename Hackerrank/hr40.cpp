#include <bits/stdc++.h>

using namespace std;

int Number_Of_Jumps(vector<int> clouds)
{
    int count=0,n=clouds.size();
    for(int i=0;i<n-1;i++)
    {
        if(i<n-2 && clouds[i+2]==0)
        {
          i++;
            count++;
        }
        else
        count++;   
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    vector<int> c(n);
    for(int i=0;i<n;i++)
        cin>>c[i];
    int jumps=Number_Of_Jumps(c);
    cout<<jumps<<endl;
    return 0;
}
