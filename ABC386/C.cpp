#include <iostream>
#include <string>

using namespace std;

int main(){
    int k;
    string s, t;

    cin >> k >> s >> t;

    int sl = s.size();
    int tl = t.size();

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
    挿入が1度行われたならば，Tの文字を1つ選んで消した時Sと一致させられる
    挿入があった場所を全探索するとO(|S^2|)かかる
    - SとTのうち先頭が一致する最大の文字数をpとする
    - SとTのうち末尾が一致する最大の文字数をsとする
    - p + s <= |S|であれば，Sに1文字挿入してSを作れる

    4の場合，
    Sを削除してTにすることは，Tに何かを挿入してSにすることと同義．
    よって，3の場合と同じように考えられる．
    
    */

if (s == t){ // 1の場合
        cout << "Yes\n";
        return 0;
    }

if (sl == tl){// 2の場合　変更が行われる場合
    int count = 0;
    for (int i = 0; i < sl; i++){
        if (s[i] != t[i]){
            count++;
        }
    }
    if (count == 1){
        cout << "Yes\n";
        return 0;
    }
}
else if (sl == tl - 1) { // 3の場合　挿入が行われる場合
    int pc = 0;
    int sc = 0;
    int te = tl - 1;
    while(pc < sl){ // 前から一致しなくなるまでを探索する
        if (s[pc] == t[pc]){
            pc++;
        }else{
            break;
        }
    }
    
    while(te - 1 - sc > 0){
        if (s[te - 1 - sc] == t[te - sc]){
            sc++;
        }else{
            break;
        }
    }

    if (sc + pc >= sl){ //　後ろから一致しなくなるまで探索
        cout << "Yes\n";
        return 0;
    }
}
else if (sl == tl + 1) { // 4の場合 SとTを逆転して3の場合と同じ処理
    swap(s,t);
    swap(sl,tl);

    int pc = 0;
    int sc = 0;
    int te = tl - 1;
    while(pc < sl){ // 前から一致しなくなるまでを探索する
        if (s[pc] == t[pc]){
            pc++;
        }else{
            break;
        }
    }
    
    while(te - 1 - sc > 0){ //　後ろから一致しなくなるまで探索
        if (s[te - 1 - sc] == t[te - sc]){
            sc++;
        }else{
            break;
        }
    }

    if (sc + pc >= sl){
        cout << "Yes\n";
        return 0;
    }
}

cout << "No\n";

return 0;
}