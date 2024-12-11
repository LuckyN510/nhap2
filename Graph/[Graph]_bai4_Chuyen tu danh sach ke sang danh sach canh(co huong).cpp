#include<bits/stdc++.h>

using namespace std;

void solve(string s, int i)
{
    stringstream ss(s);
    string word;
    vector<int> v;
    while(ss >> word)
    {
        int j = stoi(word);
        v.push_back(j);
    }
    sort(v.begin(), v.end());
    for(int x : v)
    {
        cout << i << ' ' << x << endl;
    }
}
int main()
{
    int n; cin >> n;
    scanf("\n");
    for(int i = 1; i <= n; i++)
    {
        string s; 
        getline(cin, s);
        solve(s, i);
    }
}