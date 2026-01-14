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
    fastio() int a, b, c;
    cin >> a >> b >> c;
    int max = 0;
    int res = a + b + c;
    if (res > max)
        max = res;
    res = a * b * c;
    if (res > max)
        max = res;
    res = (a + b) * c;
    if (res > max)
        max = res;
    res = a * (b + c);
    if (res > max)
        max = res;
    res = a + b * c;
    if (res > max)
        max = res;
    res = a * b + c;
    if (res > max)
        max = res;

    cout << max;
    return 0;
}