#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr);

int main()
{
    fastio();

    int n, m;
    cin >> n >> m;

    unordered_map<long long, long long> a, b;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        a[x]++;
    }

    for (int i = 0; i < m; i++) {
        long long x;
        cin >> x;
        b[x]++;
    }

    for (auto &it : b) {
        if (a[it.first] < it.second) {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
    return 0;
}
