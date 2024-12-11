#include <bits/stdc++.h>

using namespace std;
int cnt[1000007];

int main()
{
    int n; 
    cin >> n;
    int a[n];
	for(int &x : a) cin >> x;
	int min_val = INT_MAX, cnt = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] < min_val)
		{
			min_val = a[i];
			cnt = 1;
		}
		else if(a[i] == min_val)
		{
			++cnt;
		}
	}
	cout << cnt ;
}

