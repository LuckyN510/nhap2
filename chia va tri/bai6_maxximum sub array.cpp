#include<bits/stdc++.h>

using namespace std;
using ll = long long;
ll cossingSum(int a[], int l, int r, int m)
{
	ll sumLeft = 0, maxSumLeft = 0;
	ll sumRight = 0, maxSumRight = 0;
	for(int i = m; i >= l; i--)
	{
		sumLeft += a[i];
		maxSumLeft = max(maxSumLeft, sumLeft);
	}
	for(int i = m + 1; i <= r; i++)
	{
		sumRight += a[i];
		maxSumRight = max(maxSumRight, sumRight);
	}
	return maxSumLeft + maxSumRight;
}
ll sumMax(int a[], int l, int r)
{
	int m = (l + r) / 2;
	if(l == r) return a[l];
	ll leftSum = sumMax(a, l, m);
    ll rightSum = sumMax(a, m + 1, r);
    ll crossSum = cossingSum(a, l, r, m);
    
    return max({leftSum, rightSum, crossSum});
}
int main()
{
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << sumMax(a, 0, n - 1);
}