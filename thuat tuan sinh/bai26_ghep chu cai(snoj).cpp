#include <bits/stdc++.h>
using namespace std;

int n;
bool used[256];  
char c, x[256];

bool nguyen_am(char c) 
{
    return c == 'A' || c == 'E';
}

void in() 
{
    for(int i = 2; i <= n - 1; i++) 
    {
        if(nguyen_am(x[i]) && !nguyen_am(x[i - 1]) && !nguyen_am(x[i - 2])) 
        {
            return;
        }
    }
    for(int i = 1; i <= n; i++) 
    {
        cout << x[i];
    }
    cout << endl;
}

void Try_Hoanvi(int i) 
{
    for(int j = 'A'; j <= c; j++) 
    {
        if(!used[j]) {
            x[i] = j;
            used[j] = true;
            if(i == n) in();
            else  Try_Hoanvi(i + 1);
            used[j] = false;
        }
    }
}

int main() 
{
    cin >> c;
    n = c - 'A' + 1;
    Try_Hoanvi(1);
    return 0;
}
