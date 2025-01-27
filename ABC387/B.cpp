#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>
#include <cmath>
#include <map>

using namespace std;

int main(){

    int a[9][9];
    int x;
    int sum = 0;

    cin >> x;

    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            if (x != i*j){
                sum += i*j;
            }
        }
    }

    cout << sum << endl;

    return 0;
}