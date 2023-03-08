#include <iostream>
using namespace std;
int main (){
    int n, m, a=0, b=0, sum = 0;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0;i < n;i++){
        for (int j = 0;j < m;j++){
            cin >> arr[i][j];
        }
    }
    //row   
    for (int i = 0;i < n;i++){
        for (int j = 0;j < m;j++){
            sum += arr[i][j];
        }
        a++;
        cout << "The sum of row number " << i+1 << " is " << sum << endl;
        sum = 0;
    }
    //adding column numbers 
    for (int i = 0; i < m; i++){
       for(int j = 0; j < n; j++){
        sum += arr[j][i];
       }
       b++;
       cout << "The sum of column number " << i+1 << " is " << sum << endl;
       sum = 0;  
    }
}