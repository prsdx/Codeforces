#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

typedef long long ll;
typedef vector<int> vi;

void answertoProb() {
    int n;
    cin >> n;
    vi arr(n); 
    int j = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] > arr[j]) {
            j = i;
        }
    }

    ll max_val = arr[j]; 
    cout << max_val * n << "\n"; 
}

int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while(t--)
    {
        answertoProb();
    }
    return 0;
}