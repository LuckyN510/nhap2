#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    set<char> se;
    vector<char> v;
    int a[12];
    for(char it : s) 
    {
        se.insert(it);
    }
    for(char it : se) v.push_back(it);
    for(int i = 0; i < v.size(); i++) // danh dau lan luot cac ki trong mang v
    {
        a[i] = i;
    }
    do
    {
        for(int i = 0; i < v.size(); i++)
        {
            cout << v[a[i]];
        }
        cout << endl;
    }while(next_permutation(v.begin(), v.end()));

}