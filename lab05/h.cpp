#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    int a[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    bool ok = true;
    for(int i = 0; i < s.size();i++){
        if(s[i] == '0') a[0]++;
        if(s[i] == '1') a[1]++;
        if(s[i] == '2') a[2]++;
        if(s[i] == '3') a[3]++;
        if(s[i] == '4') a[4]++;
        if(s[i] == '5') a[5]++;
        if(s[i] == '6') a[6]++;
        if(s[i] == '7') a[7]++;
        if(s[i] == '8') a[8]++;
        if(s[i] == '1') a[9]++;
    }
    for(int i = 0; i < 9;i++){
        for(int j = 0; j < 9;j++){
            if(a[i] > 0 && a[j] > 0 && a[i] != 0){
                if(a[i] != a[j]){
                    ok = false;
                }
            }
        }
    }
    if (ok){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
