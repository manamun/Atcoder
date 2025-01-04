#include <iostream>
#include <vector>

using namespace std;

bool isFullHouse(int a, int b, int c, int d, int e){
    vector<int> card = {a,b,c,d,e};
    sort(card.begin(), card.end()); //cardの先頭から末尾までソート
    /*
    ちなみにC++のstd::sortはクイックソートの改良版であるイントロソートが使われている
    O(NlogN)
    */
   if (card[0]==card[1] && card[1] == card[2] && card[2] != card[3] && card[3] == card[4]){
    // AABBBの場合
    return true;
   }
   if (card[0] == card[1] && card[1] != card[2] && card[2] == card[3] && card[3] == card[4]){
    // AAABBの場合
    return true;
   }
   return false;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int e = 1; e<= 13; e++){
        if(isFullHouse(a,b,c,d,e)){
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;

}