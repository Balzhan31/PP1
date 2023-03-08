#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    bool ok = false;
    for(int i = 1; i < s.size();i++){
        if(s[i] == s[i] - 1){
            continue;
        }
        if(s[i] - 1 == s[i-1]){
            ok = true;
        }
    }
    if(ok) cout << "YES\n";
    else cout << "NO\n";
}
