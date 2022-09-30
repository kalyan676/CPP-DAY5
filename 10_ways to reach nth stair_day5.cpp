#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int countWays(int n)
{
	int prev = 1;
	int prev2 = 1;
	for (int i = 2; i <= n; i++) {
		int curr = prev + prev2;
		prev2 = prev;
		prev = curr;
	}
	return prev;
}
int main()
{
	int n = 4;

	cout << "Number of Ways : " << countWays(n);

	return 0;
}

