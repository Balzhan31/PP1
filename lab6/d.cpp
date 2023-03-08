#include <iostream>
using namespace std;
void find(int n, int a[]){
    int m;
    cin >> m;
    for(int i = 0;i < n;i++){
        if(a[i] == m){
            cout << "YES";
            return;
        } 
    }  
    cout << "NO";
} 

int main (){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    find(n, a);

}