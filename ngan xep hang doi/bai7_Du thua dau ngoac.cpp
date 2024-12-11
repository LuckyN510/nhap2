#include <bits/stdc++.h>

using namespace std;

int check(string s)
{
    stack<int> st;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '(') st.push(i);
        else if(s[i] == ')')
        {
            int j = st.top();
            if(i - j == 2) return 1;  // trường hợp biểu thức là (x) thì sẽ không hợp lệ
            else if(s[j + 1] == '(' && s[i - 1] == ')') return 1; // trường hợp sau vị trị dấu '(' có thêm dấu '(' nữa thì sai
                                                                //    trường hợp sau vị trị dấu ')' có thêm dấu ')' nữa thì sai                      
            else st.pop();
        }
    }
    return 0;
}
int main()
{
    string s; cin >> s;
    if(check(s)) cout << "YES\n";
    else cout << "NO\n";
}