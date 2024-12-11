#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int n, q;
	cin >> n >> q;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	ll pre[n];
	pre[0] = a[0];
	for(int i = 1; i < n; i++){
		pre[i] = pre[i - 1] + a[i];
	}
	while(q--){
		int x, y; cin >> x >> y;
		if(x == 0){
			cout << pre[y] << endl;
		}
		else{
			cout << pre[y] - pre[x - 1] << endl; 
		}
	}
}