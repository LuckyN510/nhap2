#include <bits/stdc++.h>

using namespace std;

void smaller_left(int a[], int n, int L[])
{
    stack<int> st;
    for(int i = n - 1; i >= 0; i--)
    {
        while(!st.empty() && a[i] < a[st.top()])
        {
            L[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty())
    {
        L[st.top()] = -1;
        st.pop();
    }
}
void smaller_right(int a[], int n, int R[])
{
    stack<int> st;
    for(int i = 0; i < n; i++)
    {
        while(!st.empty() && a[i] < a[st.top()])
        {
            R[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty())
    {
        R[st.top()] = n;
        st.pop();
    }
}

int main()
{
    int n; cin >> n; 
    int a[n], L[n], R[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    long long res = 0;
    smaller_left(a, n, L);
    smaller_right(a, n, R);
    for(int i = 0 ; i < n; i++)
    {
        int rong = R[i] - L[i] - 1;
        long long dt = 1ll * rong * a[i];
        res = max(res, dt);
    }
    cout << res;
}