#include <iostream>
using namespace std;
string valid(int n){
    bool ok = true;
    while( n != 0){
        int m;
        m = n % 10;
        if(m % 2 != 0){
        ok = false;
        }
        n /= 10;
    }  
    if (ok == true){
        return("Valid");
    } else {
        return("Not valid");
    }
}

int main(){
    int n;
    cin >> n;
    cout << valid(n);
    return 0;
}
