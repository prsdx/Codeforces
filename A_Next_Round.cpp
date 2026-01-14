#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

// Macros
#define rep(i, j) for (int i = 0; i < j; i++)
#define rrep(i, j) for (int i = j - 1; i >= 0; i--)
#define all(x) x.begin(), x.end()

// Typedef
typedef long long ll;
typedef vector<int> vi;

// void answertoProb()
// {

// }

int32_t main()
{
    fastio() int n, k;
    cin >> n >> k;
    int arr[n];
    rep(i, n)
    {
        cin >> arr[i];
    }
    int i = 0, c = 0;
    while (i < n && arr[i] >= arr[k - 1] && arr[i] != 0)
    {
        c++;
        i++;
    }
    cout << c;

    return 0;
}