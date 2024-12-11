#include <bits/stdc++.h>

using namespace std;
/*
	k = 10;
	i j
	1 9
	2 8
	3 7 
	4 6
	5 5
	+/ nếu phần tử i khác phần tử j thì cnt = số lượng phần tử i nhân với số lượng phần tử j
	+/ nếu phần tử i = phần tử j thì cnt = tổ hợp chập 2 của (số lượng phần tử i hoặc j)
*/
int main() {
	int n, k;
	cin >> n;
	int a[n];
	int d[10007] = {0};
	for(int &x : a) 
	{
		cin >> x;
		d[x]++;
	}
	cin >> k;
	int cnt = 0;
    for (int i = 0; i <= k / 2; i++) {
        int j = k - i;
        if (i != j)
            cnt += d[i] * d[j];
        else
            cnt += d[i] * (d[i] - 1) / 2;
    }

    cout << cnt;
    return 0;
}