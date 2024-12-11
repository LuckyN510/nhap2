#include<bits/stdc++.h>

using namespace std;

int n, x[100];
bool used[100];
/*
void solve()
{
    for(int i = 2; i <= n; i++)
    {
        if(abs(x[i] - x[i - 1]) == 1) return;
    }
    for(int i = 1; i <= n; i++)
    {
        cout << x[i];
    }
    cout << endl;
}

void Try_Hoanvi(int i) 
{
    for(int j = 1; j <= n; j++) 
    {
        if(!used[j]) {
            x[i] = j;
            used[j] = true;
            if(i == n) solve();
            else  Try_Hoanvi(i + 1);
            used[j] = false;
        }
    }
}
*/
void solve()
{
    for(int i = 1; i <= n; i++)
    {
        cout << x[i];
    }
    cout << endl;
}
void Try_Hoanvi(int i) 
{
    for(int j = 1; j <= n; j++) 
    {
        if(!used[j] && abs(j - x[i - 1]) != 1) {
            x[i] = j;
            used[j] = true;
            if(i == n) solve();
            else  Try_Hoanvi(i + 1);
            used[j] = false;
        }
    }
}
int main()
{
    cin >> n;
    x[0] = -1;
    Try_Hoanvi(1);
}