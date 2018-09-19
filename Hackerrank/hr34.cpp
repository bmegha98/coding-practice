#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int c=0;
        int n;
        cin>>n;
        string y=to_string(n);
        for(int i=0;i<y.length();i++)
        {
            int x=y[i]-'0';
            if(x!=0 && n%x==0)
                c++;  
        }
            cout<<c<<endl;
    }
    return 0;
}
