#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long double x) 
{    
  long double sr = sqrt(x); 
  return ((sr - floor(sr)) == 0); 
} 
int checkSemiprime(int num) 
{ 
    if(isPerfectSquare(num))
        return 0;
    int cnt = 0; 
    for (int i = 2; cnt < 2 && i * i <= num; ++i) 
        while (num % i == 0) 
        {
            num /= i;
              ++cnt;
        }
    if (num > 1) 
        ++cnt; 
    
    return cnt==2;
}
int main()
{
    long int T;
    cin>>T;
    for (long i=0; i<T; i++)
    {
        int N;
        cin>>N;
        bool flag=false;
       for(int j = 2; j <= N; ++j)
     {
        if (checkSemiprime(j))
        {
            if (checkSemiprime(N - j))
            {
                cout << "YES "<<endl;
                flag = true;
                break;
            }
        }
    }

    if (!flag)
      cout <<"NO"<<endl;
    }
    
    return 0; 
    }
