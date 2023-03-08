#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n][n];
    int max = 0;
    int pos_i = -1;
    int pos_j = -1;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            if(a[i][j] > max){
                max = a[i][j];
                pos_i = i + 1;
                pos_j = j +1 ;
            }
        }
    }
    cout << pos_i << " " << pos_j;
    return 0;
}
