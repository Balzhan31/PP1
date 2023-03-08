#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    char c; cin >> c;
    int n, cnt = 0; cin >> n;
    for(int i = 0; i < s.size();i++){
        if(s[i] == c) cnt++;
    }
    if(cnt == n) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
