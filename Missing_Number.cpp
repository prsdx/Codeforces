#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int sum = n*(n+1)/2; // sum of 1..n
    int x;
    for(int i=0; i<n-1; i++) {
        cin >> x;
        sum -= x;
    }
    cout << sum << "\n";
}
