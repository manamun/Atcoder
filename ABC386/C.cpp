#include <iostream>
#include <string>

using namespace std;

int main(){
    int k;
    string s, t;

    cin >> k >> s >> t;

    /*
    この問題は4つの状態に分けられる．
    1.操作する前からSとTが等しい場合
    2.変更が行われる場合
    3.挿入が行われる場合
    4.削除が行われる場合

    1はS=Tの場合であるので，明らか"Yes"となる．
    
    2の場合，
    変更が行われる場合は，「SとTの長さが等しい」かつ「SとTは1か所だけ異なる」という条件を持つ．
    これは，SとTの長さの比較後，ループ処理を行いSとTが1か所だけ異なるかどうかを確認すればよい．

    3の場合，
    
    */

    if (s == t){ 
        cout << "Yes\n";
        return 0;
    }

    return 0;
}