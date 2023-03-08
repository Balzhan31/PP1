#include <iostream>
using namespace std;
string Up(string s){
 for(int i = 0; i < s.size(); ++i) {
    if(s[i] >= 'a' && s[i] <= 'z') {
      s[i] -= 32;
    }
  } return s;
}

int main() {
  string s; cin >> s;
  for(int i = 0; i < s.size(); ++i) {
    cin >> s[i];
  }
  cout << Up(s) << endl;
}