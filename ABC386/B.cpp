#include <iostream>
#include <vector>
#include <string>

using namespace std;

int Couter(string s){
    int len = s.size();
    int p = 0, res = 0;
    while(p < len){
        res++;
        if ((p+1) < len && s[p] == '0' && s[p+1] == '0'){
            p+=2;
        }
        else {
            p++;
        }
    }
    return res;
}

int main(){
    string s;
    cin >> s;
    int count = Couter(s);

    cout << count << endl;
    return 0;
}