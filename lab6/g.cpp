#include <iostream>
using namespace std;
string ikki(string s){
string t = "";
for(int i = 0;i < s.size();i++){
    if(  s[i]!='A'&& s[i]!='E' && s[i]!='I' && s[i]!='U' && s[i]!='O'&&s[i]!='a'&& s[i]!='e' && s[i]!='i' && s[i]!='u' && s[i]!='o'){  
            t+=s[i];
        }
    } 
    return(t);
}
int main(){
    string s;
    getline(cin, s);
    cout << ikki(s);
}