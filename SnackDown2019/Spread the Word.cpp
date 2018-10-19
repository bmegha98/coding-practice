#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long T, N, days, index, alreadyKnow, willTell, previouslyTold;
	cin>>T;
	string input, tmp;
	for (int test=1; test<=T; test++)
	{
		cin>>N;
		long long A[N];
		memset(A, -1, sizeof(A));
		getline(cin, tmp);
		getline(cin, input);
		stringstream ss(input);
		days=1;
		alreadyKnow=1;
		willTell=0;
		ss>>A[0];
		alreadyKnow=1+A[0];
		previouslyTold=1;
		willTell=A[0];
		while(alreadyKnow<N)
		{
		    days++;
		    for (long long j=previouslyTold; j<alreadyKnow; j++)
		    {
		        if (A[j]==-1)
		            ss>>A[j];
		        willTell+=A[j];
		        previouslyTold++;
		    }
		    alreadyKnow+=willTell;
		    
		}
		cout<<days<<"\n";
	}
	return 0;
}
