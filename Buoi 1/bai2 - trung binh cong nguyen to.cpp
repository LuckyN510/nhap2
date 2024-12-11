#include<bits/stdc++.h>

using namespace std;

bool nt(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return n > 1;
}

int main()
{
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	int dem = 0, sum = 0;
	double tbc = 0;
	for(int x : a)
	{
		if(nt(x))
		{
			sum += x;
			++dem;
		}
	}
	tbc = 1.0 * sum / dem;
	cout << setprecision(3) << fixed << tbc << endl;
}