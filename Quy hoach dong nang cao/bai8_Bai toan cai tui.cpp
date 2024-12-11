#include<bits/stdc++.h>

using namespace std;
using ll = long long;
// V: là trọng lượng tối đa của cái túi có thể mang đi đc
// w là trọng lượng của từng đồ vật
// v là giá trị của từng đồ vật
// F[số món đồ lấy][trọng lượng của số đồ vật đã lấy] -> F la tong GIA TRI


ll F[1001][1001];
int main()
{
	int n, V; cin >> n >> V;
	int w[n + 1], v[n + 1];
	for(int i = 1; i <= n; i++) cin >> w[i];
	for(int i = 1; i <= n; i++) cin >> v[i];
	F[0][0] = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= V; j++)
		{
			if(j >= w[i])
			{
				F[i][j] = max(v[i] + F[i - 1][j - w[i]], F[i - 1][j]);
			}
			else
			{
				F[i][j] = F[i - 1][j];
			}
		}
	}
	cout << F[n][V];
}