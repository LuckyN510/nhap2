#include<bits/stdc++.h>

using namespace std;
// n: là số thịt đc mua trong 1 ngày;
// S: là số ngày ăn thịt để sống;
// m: là số thịt cần ăn / 1 day;


int main()
{
    int n, s, m;
    cin >> n >> s >> m;
    int SoThitCanAnDeSong = s * m;
    int SoNgayDiCho = s - s / 7;// vì chỉ đi chợ từ 2 - 6;
    int TongSoThitDiChoMuaDc  = SoNgayDiCho * n;
    if(TongSoThitDiChoMuaDc < SoThitCanAnDeSong) cout << "-1" << endl;
    else 
    {
        cout << (SoThitCanAnDeSong + n - 1) / n;
    }
} 