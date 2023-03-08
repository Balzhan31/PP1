#include <iostream>
#include <string>
using namespace std;
string thug(string s, int n){
    int cnt = 0;
    for(int i = 0; i < s.size();i++){
        if(s[i] >= '0' && s[i] <= '9'){
            cnt++;
        }
    }if(cnt >= n){
        return ("YES");
    } else {
    return ("NO"); 
    }   
}

int main(){
    string s;cin >> s;
    int n; cin >> n;

    cout << thug(s, n) << endl;
    return 0;
}
