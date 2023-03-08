#include <iostream>
using namespace std;

int main(){
    string s, t; cin >> s >> t;
    int cnts = 0;
    int cntt = 0;
    for(int i = 0; i < s.size();i++){
        if(s[i] - 97){cnts++;}
    }
    for(int i = 0; i < t.size();i++){
        if(t[i] - 97){cntt++;}
    }
    if(cnts == cntt) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
