#include <iostream>
using namespace std;

int main(){
    string s, t; cin >> s >> t;
    string copy = s;
    while(copy.size() <= t.size()){
        if(copy == t){
            cout << "YES\n";
            return 0;
        }
        copy += s;
    }
    cout << "NO\n";
}
