#include <iostream>
using namespace std;

int main() {
  string s; 
  cin >> s;
  int cntUp = 0;
  int  cntLow = 0;
  for(int i = 0; i < s.size(); ++i) {
    if(s[i] >= 'a' && s[i] <= 'z') {
      cntLow++;
    } else {
      cntUp++;
    }
  }
  cout << cntLow << " " << cntUp << endl;
}