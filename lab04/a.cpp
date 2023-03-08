#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n][n];
    int max = 0;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            cin >> a[i][j];
            if(a[i][j] > max){
                max = a[i][j];
            }
        }
    }
    cout << max << endl;

}
