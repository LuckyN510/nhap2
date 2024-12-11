#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int n, q; cin >> n >> q;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}	
	int d[n + 5] = {0};
	while(q--){
		int l, r; cin >> l >> r;
		--l; --r;
		cout << l << ' ' << r << endl;
		d[l] += 1;
		d[r + 1] -= 1;
	}
	cout << endl;
	for(int i = 0; i < n; i++){
		cout << d[i] << " ";
	}
	cout << endl;
	int F[n];
	F[0] = d[0];
	for(int i = 1; i < n; i++){
		F[i] = F[i - 1] + d[i];
	}
	
	sort(F, F + n, greater<int>());
	sort(a, a + n, greater<int>());
	ll res = 0;
	for(int i = 0; i < n; i++){
		res += 1ll * a[i] * F[i];
	}
	cout << res << endl;
}