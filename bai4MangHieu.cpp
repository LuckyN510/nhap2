#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n + 1];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}	
	long long pre[n + 1];
	pre[0] = a[0];
	for(int i = 1; i < n; i++){
		pre[i] = a[i] - a[i - 1];
	}
	for(int i = 0; i < n; i++){
		cout << pre[i] << endl;
	}
}