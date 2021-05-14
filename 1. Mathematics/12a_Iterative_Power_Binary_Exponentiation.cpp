#include<bits/stdc++.h>
using namespace std;

/*
Fact :

1.every no. can be represented as powers of 2
19 = 16 + 2 + 1
6  = 4  + 2
9  = 8  + 1
(1=2^0)

2.we can travel from LSB(least significant bit) to MSB(most significant bit) in O(logn) time
*/

int power(int x,int n)//time comp. O(logn)
{
	int res=1;
	while(n!=0)
	{
		if(n&1)//check if n is odd
		{
			res=res*x;
		}
		x=x*x;
		n=n>>1;//same as n=n/2
	}

	return res;
}

int main()
{
	int x,n;
	cin>>x>>n;

	cout<<power(x,n);
	return 0;
}