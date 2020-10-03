/*
Count the given numbers on your fingers and find the correct finger on which the number ends.
The first number starts from the thumb, second on the index finger, third on the middle finger, fourth on the ring finger and fifth on the little finger.
Again six comes on the ring finger and so on.
*/

#include<iostream>
using namespace std;

int fingerGame(int n)
{
    int r = n%8;
    if(r == 1 || r == 5)
        return r;
    if(r == 0 || r == 2)
        return 2;
    if(r == 3 || r == 7)
        return 3;
    if(r == 4 || r == 6)
        return 4;
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    cout<<fingerGame(n)<<endl;
	    
	    
	}
	return 0;
}
