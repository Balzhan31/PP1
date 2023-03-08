#include <iostream>

using namespace std;

void f1(int n, int a[]){
    for(int i = n - 1; i >= 0; i--){
        cout << a[i] << " ";
     }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    f1(n, a);
    return 0;
}