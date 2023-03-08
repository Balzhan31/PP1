#include <iostream>
using namespace std;
void lucky(int n){
    int sum = 0;
    int m=0; // last number
    m = n % 10;
    while( n != 0){
        sum += n % 10;
        n /= 10;
    } if( sum % m == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
int main(){
    int n;
    cin >> n;
    lucky(n);
}