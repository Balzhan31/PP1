#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n][n];
    int max = -1e9;
    int second_max = 0;
    for( int i = 0; i < n;++i){
        for (int j = 0; j < n;++j){
            cin >> a[i][j];
        }
    }
    for (int i = 0;  i < n; i++){
        for (int j = 0; j < n; j++){
        if ( max < a[i][j]){
            max = a[i][j];
            }
        }
    } 
    for (int i = 0;i<n;i++){
        for (int j = 0;j<n;j++){
            if(second_max< a[i][j] && a[i][j] != max)
            second_max = a[i][j];
        }
    }
    cout << second_max << endl;    
}