#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
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
    delete[] a; 
    return 0;
}
