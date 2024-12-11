#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int le = 0, chan = 0, tong_chan = 0, tong_le;
    for(int x : a)
    {
    	if(x % 2 == 0)
    	{
    		++chan;
    		tong_chan += x;
		}
		else
		{
			++le;
			tong_le += x;
		}
	}
	cout << chan << endl << le << endl << tong_chan << endl << tong_le << endl;
    
}