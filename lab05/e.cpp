#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    int sumEven = 0;
    int sumOdd = 0;
    for(int i = 0; i < s.size();i++){
        if( i % 2 == 0){
            sumEven += (s[i] - '0');
        }else if(i % 2 != 0){
            sumOdd += (s[i] - '0');
        }
    }
    if(sumEven == sumOdd) cout << "YES";
    else cout << "NO";
    return 0;
}
