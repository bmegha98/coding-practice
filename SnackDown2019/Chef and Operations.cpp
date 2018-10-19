#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long T, N, *A, *B, diff, p;
	cin>>T;
	bool flag;
	string a, b, tmp;
	for (long long i=0; i<T; i++)
	{
		cin>>N;
		A=new long long[2*N];
		flag=true;
		getline(cin, tmp);
		getline(cin, a);
		getline(cin, b);
		stringstream ss1(a), ss2(b);
		for (long long j=0, k=0; j<N; k+=3, j++)
		{
		    if (k<N)
		    {
		        ss1>>A[k];
		        if (k+1<N)
		            ss1>>A[k+1];
		        if (k+2<N)
		            ss1>>A[k+2];
		    }
			
			p=N+j;
			ss2>>A[p];
			if (A[j]==A[p])
				A[j]=A[p];
			else if (j<N-2 && A[j]<A[p])
			{
				diff=A[p]-A[j];
				A[j]=A[j]+1*diff;
				A[j+1]=A[j+1]+2*diff;
				A[j+2]=A[j+2]+3*diff;
			}
			else
			{
				flag=false;
				break;
			}
		}
		if (flag)
			cout<<"TAK\n";
		else
			cout<<"NIE\n";
		
	}
	return 0;
}
