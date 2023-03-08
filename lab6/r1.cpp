#include <iostream>
using namespace std;
void toUp(char a){
    cout << char(toupper(a));
}
int main(){
    char a;
    cin >> a;
    toUp(a);
}