#include <iostream>
using namespace std;
int sumd(int a){
    int b;
    int sum = 0;
    while( a != 0){
        b = a % 10;
        sum += b;
        a /=10;
    }
    return (sum);
}
int main(){
    int n;
    cin >> n;
    cout << sumd(n);
}
