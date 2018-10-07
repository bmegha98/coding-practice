#include <iostream>
#include <math.h>
using namespace std;

int Squares(int a,int b)
{
    int count=floor(sqrt(b))-ceil(sqrt(a))+1;
    return count;
}
int main()
{
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++)
    {
        int min,max;
        cin>>min>>max;
        int num_squares=Squares(min,max);
        cout<<num_squares<<endl;
    }
    return 0;
}


/*
TLE CODE
#include <iostream>
#include <math.h>
using namespace std;

int Squares(int a,int b)
{
    int count=0;
    for(int i=a;i<=b;i++)
    {
        if(int(sqrt(i))==sqrt(i))
            count++;
    }
    return count;
}
int main()
{
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++)
    {
        int min,max;
        cin>>min>>max;
        int num_squares=Squares(min,max);
        cout<<num_squares<<endl;
    }
    return 0;
}
*/
