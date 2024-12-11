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
	for(int x : a)
	{
		if(cnt[x] > 0)
		{
			cout << x << ' '<< cnt[x] << endl;
			cnt[x] = 0; 
		}
	}

	
}