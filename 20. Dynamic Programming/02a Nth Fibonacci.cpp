#include<bits/stdc++.h>
using namespace std;

//Recursion
int fib(int n)//time comp. O(2^n)
{
	if (n == 0 or n == 1)
	{
		return n;
	}

	return fib(n - 1) + fib(n - 2);
}

int main()
{
	int n;
	cin >> n;

	cout << fib(n) << endl;
	return 0;
}