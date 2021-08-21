#include<bits/stdc++.h>
using namespace std;

/*
find the only repeating element considering all conditions below :
O(n) time
O(1) space
no modifications to original array
*/

int repeatingElement(int a[], int n) //time comp. O(n) ; space comp. O(n)
{
	bool visit[n];

	memset(visit, false, sizeof(visit));

	for (int i = 0; i < n; i++)
	{
		if (visit[a[i]])
		{
			return a[i];
		}
		visit[a[i]] = true;
	}

	return -1;
}

int main()
{
	int arr[] = {1, 2, 3, 0, 3, 4, 5};
	int n = sizeof(arr) / sizeof(int);

	cout << repeatingElement(arr, n);
	return 0;
}