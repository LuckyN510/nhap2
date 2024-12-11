#include<bits/stdc++.h>

using namespace std;
int main()
{
	
	int n; cin >> n;
	int a[n];
	int cnt[10005] = {0};
	for(int &x : a)
	{
		cin >> x;
		cnt[x]++;
	}
	for(int i = 0; i < n; i++)
	{
		if(cnt[a[i]] != 0)
		{
			cout << a[i] << ' ';
			cnt[a[i]] = 0;
		}
	}
	
	
}