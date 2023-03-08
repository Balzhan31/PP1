#include <iostream>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    for(int i = 0; i <= s.size() - t.size();i++){
        if(s.substr(i, t.size()) == t){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
// string s, t;
// cin >> s >> t;
// cout << (s.find(t) != string::npos ? "YES" : "NO");
// cout << (s.find(t) != -1 ? "YES" : "NO");
