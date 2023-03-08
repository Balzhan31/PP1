#include <iostream>
#include <cmath>
using namespace std;
string mer(string s){
    for(int i = 0;i < s.size();i++){
        if(i % 2 == 0 && s[i] >= 'a' && s[i] <= 'z'){
            s[i] -= 32;
        }
    } return(s);
}

int main(){
    string s;
    cin >> s;
    cout << mer(s);
}
