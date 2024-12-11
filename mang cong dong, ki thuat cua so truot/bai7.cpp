#include<bits/stdc++.h>

using namespace std;
const int m = 200006;
//  có n theo tác thêm 1 gam đường vào các cốc từ chỉ số 
// l đến chỉ số r, sau khi thực hiện n bước thi trả lời cho q truy vấn rằng các cốc từ chỉ số l, đên r
// có bao nhiêu cốc có khối lượng >= k

int Coc[m];
int F[m];
int main(){
    int n, k, q;
    cin >> n >> k >> q;
    while(n--){
        int l, r; cin >> l >> r;
        --l; --r;
        Coc[l] += 1;
        Coc[r + 1] -= 1;
    }
    int dem = 0;
    for(int i = 1; i < m; i++){
        Coc[i] += Coc[i - 1];
    }
    for(int i = 1; i < m; i++){
        if(Coc[i] >= k) ++dem;
        F[i] = dem;
    }
    while(q--){
        int l1, r1; cin >> l1 >> r1;
        --l1; --r1;
        cout << F[r1] - F[l1 - 1] << endl;
    }
}