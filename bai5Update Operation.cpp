#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
	int n, q; cin >> n >> q;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	ll D[n + 2];
	D[0] = a[0];
	for(int i = 1; i < n; i++){
		D[i] = a[i] - a[i - 1];
	}
	for(int i = 0; i < n; i++){
		cout << D[i] << " ";
	}
	cout << endl;
	while(q--){
		int l, r, k;
		cin >> l >> r >> k;
		D[l] += k;
		D[r + 1] -= k;
		
	}
	for(int i = 0; i < n; i++){
		cout << D[i] << " ";
	}
	cout << endl;
	ll F[n];
	F[0] = D[0];
	for(int i = 1; i < n; i++){
		F[i] = F[i - 1] + D[i];
	}
	for(int i = 0; i < n; i++){
		cout << F[i] << " ";
	}
}