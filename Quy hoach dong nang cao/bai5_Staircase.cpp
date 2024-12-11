#include <bits/stdc++.h>
using namespace std;

int MOD = 1e9 + 7;

int F[1000001];

int main() 
{
    int n, k;
    cin >> n >> k;
    F[0] = 1;  
    for (int i = 1; i <= n; i++) 
	{
        for (int j = 1; j <= min(n, k); j++) 
		{
            if (i >= j) 
			{
                F[i] += F[i - j];
                F[i] %= MOD;
            }
        }
    }
    cout << F[n];
    return 0;
}
