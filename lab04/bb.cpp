#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n,sum=0;
  int max=-1000001;
  int maxsecond=0;
  cin>> n;

  int a[1099][1099];
  for (int i=1; i<=n; i++) 
  {
    for (int j=1; j<=n; j++)
    {
      cin>>a[i][j];
      if(a[i][j] > max) max = a[i][j];
    }
  }

  for(int i=1; i<=n; i++)
  {
    for(int j=1; j<=n; j++)
    {
      if(a[i][j] > maxsecond and a[i][j] != max) maxsecond = a[i][j];
    }
  }

  cout << maxsecond;

}
