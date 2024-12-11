#include<bits/stdc++.h>

using namespace std;


void xuly(int i, string s)
{
    stringstream ss(s);
    string word;
    while(ss >> word)
    {
        int j = stoi(word);
        if(j > i) cout << i << ' ' << j << endl;
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
        xuly(i, s);
    }
}