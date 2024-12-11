#include<bits/stdc++.h>

using namespace std;
int F[1000001];
int main()
{
	int n; cin >> n;
	int a[n + 1];
	F[0] = 1;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= 3; j++)
		{
			F[i] += F[i - j];
		}
	}
	cout << F[n];
}

