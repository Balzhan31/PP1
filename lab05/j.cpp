#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    int l = 0;
    int r = s.size() - 1;
    while( l <= r){
        if(s[l] != s[r]){
            cout << "YES\n";
            return 0;
        }
        l++;
        r--;
    }
    cout << "NO\n";
    return 0;
    }