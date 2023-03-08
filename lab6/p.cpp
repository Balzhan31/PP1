#include <iostream>
using namespace std;
int numb(int n){
    return abs(n);
}
int main(){
    int n;
    cin >> n;
    cout << numb(n);
}