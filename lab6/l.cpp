#include <iostream>
#include <string>
using namespace std;
string valid(string s, int n){
    int cnt = 0, max = 0;
    for(int i = 0; i < s.size();i++){
        if(s[i] >= '0' && s[i] <= '9'){
            cnt++;
            if(cnt>max){
                max = cnt;
            }
        } else {
            cnt = 0;
        }
    }
    if(max >= n){
        return ("Valid");
    } else{
        return("Not valid");
    }
}

int main(){
    string s;cin >> s;
    int n; cin >> n;

    cout << valid(s, n) << endl;
    return 0;
}