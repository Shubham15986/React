#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<string> operations;
        
        // Pattern from examples:
        // We want to create rows where row i contains [i, i+1, ..., n, 1, 2, ..., i-1]
        // This ensures each column has all numbers 1 to n exactly once
        
        for (int i = 2; i <= n; i++) {
            // Transform row i from [1,2,3,...,n] to [i,i+1,...,n,1,2,...,i-1]
            
            // Method: repeatedly move the first element to its correct position
            for (int step = 0; step < i - 1; step++) {
                // At each step, move the element at position 1 towards the end
                int len = n - step;
                if (len > 1) {
                    operations.push_back(to_string(i) + " 1 " + to_string(len));
                }
            }
        }
        
        cout << operations.size() << "\n";
        for (const string& op : operations) {
            cout << op << "\n";
        }
    }
    
    return 0;
}