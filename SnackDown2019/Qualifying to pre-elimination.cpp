#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long T, N, K, c;
	long long* S;
	cin>>T;
	for (long long i=0; i<T; i++)
	{
		cin>>N>>K;
		K-=1;
		S=new long long[N];
		for (int i=0; i<N; i++)
			cin>>S[i];
		sort(S, S+N, greater<int>());
		c=K;
		if (K<N)
			c+=count(S+K, S+N, S[K]);
		
		cout<<c<<"\n";
			
	}
	return 0;
}
