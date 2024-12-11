#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	int res = INT_MAX;
	sort(a, a + n);
	for(int i = 1; i < n; i++)
	{
		res = min(res, a[i] - a[i - 1]);
	}
	cout << res << endl;
}