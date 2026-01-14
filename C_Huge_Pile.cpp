#include <iostream>
#include <cmath>

using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    // Case 1: Target is larger than source
    if (k > n) {
        cout << -1 << endl;
        return;
    }
    
    // Case 2: Target is exactly source
    if (k == n) {
        cout << 0 << endl;
        return;
    }

    // Iterate through depths (minutes)
    // 2^30 is > 10^9, so 32 iterations are plenty safe
    for (int d = 1; d <= 32; ++d) {
        long long m = (1LL << d); // m = 2^d
        
        // If 2^d > n, piles are all 0 or 1.
        // If we haven't found k by now (and k >= 1), we won't find it.
        if (m > n) {
            // Check if we need 1 and piles of size 1 exist
            // Actually handled by logic below (q=0, r=n), 
            // but loop usually breaks via q < k check before this logic error matters.
            // However, strictly speaking, break here to avoid division by huge numbers logic issues if any.
            if (k == 0) { // problem says k >= 1 usually, but just in case
                cout << -1 << endl; // Or specific logic
            }
             // For k=1, logic below handles it (q=0, q+1=1).
        }

        long long q = n / m;
        long long r = n % m;

        // Count of piles with size (q + 1) is r
        // Count of piles with size (q) is m - r

        // Check if k exists at this depth
        bool found = false;
        
        // Check for size q+1
        if ((q + 1) == k && r > 0) found = true;
        
        // Check for size q
        if (q == k && (m - r) > 0) found = true;

        if (found) {
            cout << d << endl;
            return;
        }

        // Optimization: If the largest possible pile at this depth (q+1)
        // is smaller than k, we will never find k in deeper levels.
        if ((q + 1) < k) {
            cout << -1 << endl;
            return;
        }
    }
    
    cout << -1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}