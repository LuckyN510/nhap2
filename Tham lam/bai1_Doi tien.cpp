#include<bits/stdc++.h>

using namespace std;

int tien[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
int main()
{
    int n; cin >> n;
    int cnt = 0, index = 0;
    while(n)
    {
        cnt += n / tien[index];
        n = n % tien[index];
        index++;
    }
    cout << cnt;
}