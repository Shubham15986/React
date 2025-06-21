#include <iostream>
using namespace std;


int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n;
    cin >> n;


    cout << 2 * (n - 1) << endl;
    
    for (int i = 1; i < n; ++i) {
        cout << i << " " << i << " " << n << endl;
    }
    for (int i = 2; i <= n; ++i) {
        cout << i << " " << 1 << " " << i - 1 << endl;
    }
    }
    return 0;
}