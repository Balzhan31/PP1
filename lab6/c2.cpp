#include<iostream>
using namespace std;

/*
6
4 3 1 2 4 1
3 1 1 5 4 4

1 2 3 4 5
2 1 1 2 0
2 0 1 2 1

2 + 0 + 1 + 2 + 0 = 5
*/

void read(int arr[], int n)
{
    int value;
    for(int i=0; i<n; i++) {
        cin >> value;
        arr[value]++;
    }
}

void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int counter(int a[], int b[], int n)
{
    int count = 0;
    for(int i=1; i<=100; i++)
    {
        count += min(a[i], b[i]);
    }
    return count;
}

int main()
{
    int a[101], b[101];
    for(int i=0; i<=100; i++)
    {
        a[i] = b[i] = 0;
    }

    int n; 
    cin >> n;
    read(a, n);
    read(b, n);

    /*print(a, n);
    print(b, n);*/

    cout << counter(a, b, n) << endl;

    return 0;
}