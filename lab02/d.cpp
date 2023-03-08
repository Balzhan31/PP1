#include <iostream>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a = 0;
    if(n < k){
        a = 2;
    }
    else if( n > k && 2*n % k > 0){
        a = (2*n/k) + 1 ;
    }
    else if( n > k && 2*n % k == 0){
        a = (2*n/k);
    }
    cout << a << endl;
    return 0;
}
