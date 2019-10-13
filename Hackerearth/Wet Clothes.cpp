/*
We have m completely wet clothes out under sunshine waiting to become dry. we are now at second t1 and it's raining. It's going to rain
again on seconds t2..tn and after each rain clothes will be completely wet again. Cloth number i needs a[i] seconds to become dry. We can
go out and collect all dry clothes at any moment but can't do this more than g times. What is the maximum number of clothes we can collect
until second tn? Note that the duration of each rain is almost zero, so we can ignore it. Also collecting clothes does not take any time 
from us.
Input format :
First line of input contains three integers n , m ,g respectively. In the second line will be n increasing numbers denoting t1..tn. In the
Last line will have m numbers denoting  a1..am.

Output format:
In a single line print maxmimum number of clothes we can collect.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , m , g , k =0 , c =0;
	cin >> n >> m >> g;
	int t[n] , a[m];
	for(int i =0;i<n;i++)
	cin>>t[i];
	int gap[m];
	for(int i = 0;i<n-1;i++)
	{
	    gap[k] = t[i+1]-t[i];
	    k++;
	}
	int *M = max_element(gap,gap+k);
	
	for(int i = 0;i<m;i++)
	{
	cin>>a[i];
	if(a[i] <= *M)
	   c++;
	}
	
	cout<<c<<endl;
	    
}
