#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long T, N, num, no_of_ways, val, pre_val;
    cin>>T;
    map<long long, long long>::iterator itr;
    bool flag;
    for (long long test=1; test<=T; test++)
    {
        no_of_ways=1;
        cin>>N;
        map<long long, long long, greater<long long>> counts;
        for (int i=0; i<N; i+=2)
        {
            cin>>num;
            if (counts.find(num)==counts.end())
                counts.insert(make_pair(num,1));
            else
                counts[num]++;
            cin>>num;
            if (counts.find(num)==counts.end())
                counts.insert(make_pair(num,1));
            else
                counts[num]++;
        }
        /*for (itr=counts.begin(); itr!=counts.end(); itr++)
            cout<<itr->first<<":"<<itr->second<<"\n";*/
        itr=counts.begin();
        pre_val=itr->second;
        for (; ; )
        {
            flag=false;
            if (pre_val>0 && pre_val%2!=0)
            {
                flag=true; 
                no_of_ways=no_of_ways*pre_val%1000000007;
                pre_val--;
            }
            if (pre_val>0 && pre_val%2==0)
            {
                pre_val--;
                while(pre_val>=3)
                {
                    no_of_ways=no_of_ways*pre_val%1000000007;
                    pre_val-=2;
                }
            }
            itr++;
            if (itr==counts.end())
                break;
            else
            {
                val=itr->second;
                if (flag)
                {
                    no_of_ways=no_of_ways*val%1000000007;
                    val--;
                }
                pre_val=val;
                if (pre_val>0 && pre_val%2==0)
                {
                    pre_val--;
                    while(pre_val>=3)
                    {
                        no_of_ways=no_of_ways*pre_val%1000000007;
                        pre_val-=2;
                    }
                    pre_val=0;
                }
                else
                    continue;
            }
            itr++;
            pre_val=itr->second;
            if (itr==counts.end())
                break;
        }
        cout<<no_of_ways<<"\n";
    }
    return 0;
}
