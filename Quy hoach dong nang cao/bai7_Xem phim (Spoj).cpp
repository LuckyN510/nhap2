#include <bits/stdc++.h>
using namespace std;

int F[1001][1001];
int mod = 1e9 + 7;
int main()
{
	int C, n; cin >> C >> n;
	int w[n + 1];
	for(int i = 1; i <= n; i++) cin >> w[i];
	F[0][0] = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= C; j++)
		{
			if(j >= w[i])
			{
				F[i][j] = max(w[i] + F[i - 1][j - w[i]], F[i - 1][j]);
			}
			else
			{
				F[i][j] = F[i - 1][j];
			}
			cout << i << ' ' << j << " " << F[i][j] << endl;
		}
	}
	cout << F[n][C];
}