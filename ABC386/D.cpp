#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <tuple>

using namespace std;
/*
N行N列のグリッドを塗り分ける問題
*/

int main(){
    vector< tuple <int, int, char> > n; //グリッド(i,j)マスの塗られている色
    int N, M;
    int x, y;
    char c;
    int min_y = 1 << 31 - 1;
    string ans = "Yes";
    
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        cin >> x >> y >> c;
        n.push_back({x,y,c}); //グリッド(x,y)の色
    }

    sort(n.begin(), n.end(),[](const auto& a, const auto& b) {
        return get<0>(a) < get<0>(b);
    });

    for (int i = 0; i < M; i++){
        if (get<2>(n[i]) == 'W'){
            min_y = min(min_y, get<1>(n[i]));
        }
        else{
            if (get<1>(n[i]) >= min_y){
                ans = "No";
            }
        }
    }

    cout << ans << endl;

    return 0;

}