#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float girls(float n, float m){
    return (m * 100)/n;;
}
int main(){
    int n, m;
    cin >> n >> m;
    cout << setprecision(6)<< girls(n, m) << endl;
}