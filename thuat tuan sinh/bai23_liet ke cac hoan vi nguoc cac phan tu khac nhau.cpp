#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin >> n;
    set<int> se;
    vector<int> v;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        se.insert(x);
    }
    for(int x : se)
    {
        v.push_back(x);
    }
    sort(v.begin(), v.end(), greater<int>());
    do
    {
        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i] << ' ';
        }
        cout << endl;
    } while(prev_permutation(v.begin(), v.end()));

    return 0;
}
