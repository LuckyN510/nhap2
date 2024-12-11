#include<bits/stdc++.h>

using namespace std;

int n, x[100];
bool used[100];

void Try(int i)
{
    for(int j = n; j >= 1; j--)
    {
        if(used[j] == 0)
        {
            x[i] = j;
            used[j] = 1;
            if(i == n)
            {
                for(int i = 1; i <= n; i++)
                {
                    cout << x[i];
                }
                cout << endl;
            }
            else
                Try(i + 1);
                used[j] = 0;  
        }
    }
}
int main()
{
    cin >> n; 
    Try(1);
}