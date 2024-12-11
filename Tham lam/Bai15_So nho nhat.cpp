#include<bits/stdc++.h>

using namespace std;

string beNhat(int sum, int n)
{
    string res = string(n, '0');
    for(int i = n - 1; i >= 0; i--)
    {
        if(sum > 9)
        {
            res[i] = '9';
            sum -= 9;
        }
        else
        {
            if(i != 0) // trường hợp số kết thúc chưa phải vị trí cuối cùng thì điền 1 vào vtri đầu 
            {
                res[0] = '1';
                res[i] += (sum - 1);
                return res;
            }
            else // trường hợp số kết thúc tại vị trí cuối cùng
            {
                res[i] += sum;
                return res;
            }
        }
    }
}
int main()
{
    int sum, n; cin >> sum >> n;
    if(n * 9 < sum || sum == 0 && n > 1)
    {
        cout << -1;
    }
    else cout << beNhat(sum, n);
}