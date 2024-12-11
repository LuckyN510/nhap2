#include<bits/stdc++.h>

using namespace std;

int n, k, x[100], a[100], ok;
/*
12 4

9 10 11 12 
8 10 11 12 
8 9 11 12 
8 9 10 12 
8 9 10 11 
7 10 11 12 
7 9 11 12 
7 9 10 12 
7 9 10 11 
7 8 11 12 
7 8 10 12 
7 8 10 11 
7 8 9 12 
.......
*/
/*
void ktao()
{
    int m = n;
    for(int i = k; i >= 1; i--)
    {
        x[i] = m--;
    }
}
*/
void sinh()
{
    int i = k;
    while(i >= 1 && x[i] - x[i - 1] == 1) // nếu 2 sô liền kề hơn kém nhau 1 thì dịch biến i sang trái 1 dv
    {
        --i;
    }
    if(i == 0) ok = 0;
    else// nếu biến i chưa phải cấu hình cuối cùng thì giảm giá trị tại biến i xuống 1dv
    {
        x[i]--;
        int m = n;
        for(int j = k; j > i; j--)// in ra giá trị lớn nhất sau nó
        {
            x[j] = m--;
        }
    }
}
bool check()
{
    for(int i = 1; i <= k; i++)
    {
        if(a[i] != x[i]) return 0;
    }
    return 1;
}
int main()
{
    cin >> n >> k;
    for(int i = 1; i <= k; i++)
    {
        cin >> a[i];
        x[i] = n - k + i;
    }
    
    ok = 1;
    int cnt = 1;
    while(ok)
    {
        if(check())
        {
            cout << cnt; break;
        }
        ++cnt;
        sinh();
    }
}
