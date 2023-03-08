#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    if( n % 2 != 0) cout << "Super";
    else if(n >= 2 && n <= 5 && n % 2 == 0) cout << "Not Super";
    else if(n >= 6 && n <= 20 && n % 2 == 0) cout << "Super";
    else if ( n > 20 && n % 2 == 0) cout << "Not Super";
}
