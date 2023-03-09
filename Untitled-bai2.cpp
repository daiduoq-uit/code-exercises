#include <iostream>
using namespace std;

void inputArray(int*&a, int &n) 
{
    cin>>n;
    a = new int[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
}

void findElements(int* a, int n, int m)
{
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        bool found = false; 
        for (int j = 0; j < n; j++) {
            if (a[j] == x) {
                cout << j << endl;
                found = true; 
                break;
            }
        }
        if (!found) { 
            cout << -1 << endl;
        }
    }
}

int main()
{
    int n,m;
    int *a=NULL;
    inputArray(a,n);
    cin >> m;
    findElements(a,n,m);
    return 0;
}
