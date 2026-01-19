#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define rep(i,j) for(int i=0;i<j;i++)
#define all(x) x.begin(), x.end()

typedef long long ll;
typedef vector<int> vi;

void answertoProb()
{
    int n;
    if (!(cin >> n)) return;
    vi a(n);
    rep(i, n) cin >> a[i];

    sort(all(a));
    
    vi v;
    if(n > 0) v.push_back(a[0]);
    for(int i = 1; i < n; i++) {
        if(a[i] != a[i-1]) v.push_back(a[i]);
    }

    int res = 1;
    int cur = 1;
    int sz = v.size();

    for(int i = 0; i < sz - 1; i++) {
        if(v[i+1] == v[i] + 1) {
            cur++;
        } else {
            cur = 1;
        }
        if(cur > res) res = cur;
    }

    cout << res << "\n";
}

int32_t main()
{
    fastio();
    int t;
    if (!(cin >> t)) return 0;
    while(t--)
    {
        answertoProb();
    }
    return 0;
}