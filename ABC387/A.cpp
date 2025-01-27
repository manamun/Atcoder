#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <iomanip>

using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    long double square = pow(A+B, 2);

    cout << setprecision(20) << square << endl;

    return 0;
}

/*
C++での浮動小数点数の表示精度の変更方法
・std::setprecision(n)マニピュレータを使用する．このマニピュレータはストリームに対して，浮動小数点数の「表示精度」をnに設定する．
・表示精度のデフォルト値は6
・ストリームに対する設定は，そのストリーム以降の全ての処理に適応される
・
*/