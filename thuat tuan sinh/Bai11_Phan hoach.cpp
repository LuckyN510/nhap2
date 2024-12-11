#include <bits/stdc++.h>

using namespace std;

int n, x[100], cnt = 0;

void Try(int i, int start, int sum)
{
    
    for(int j = start; j >= 1; j--)
    {
        if(sum + j <= n)
        {
            x[i] = j;
            sum += j;
            if(sum == n)
            {
                for(int l = 1; l <= i; l++) 
                {
                    
                    cout << x[l];
                    if(l < i)
                    {
                        cout <<"+";
                    } 
                }
                ++cnt;
                cout << endl;
            }
            else 
            {
                Try(i + 1, j, sum); 
            }
            sum -= j;
        }
    }
}

int main()
{
    cin >> n;
    Try(1, n, 0);
    return 0;
}
