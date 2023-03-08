#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    int cntOdd = 0; 
    int cntEven = 0;
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    for(int i = 0; i < n;i++){
        if(a[i] % 2 == 0) cntEven++;
        else if(a[i] % 2 !=0) cntOdd++;
    }
    cout << cntEven << " " << cntOdd << endl;
}
