#include <iostream>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int a[n][m];
    int row = 0;
    int min = 1e9;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
          cin >> a[i][j];
        }
    }
    for(int i = 0; i < n;i++){
        int sum = 0;
        for(int j = 0; j < m;j++){
            sum += a[i][j];
        }
    if( sum < min){
        min = sum;
        row = i + 1;
    }
    }
    cout << row;
    return 0;
}
