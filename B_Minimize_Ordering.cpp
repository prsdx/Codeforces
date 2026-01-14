#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

typedef long long ll;
typedef vector<int> vi;

// void answertoProb()
// {
    
// }

int32_t main()
{
    fastio();
    string s;
    cin >> s;
    vector<char> chars;
    for(auto &it:s)
    {
        chars.emplace_back(it);
    }
    sort(all(chars));
    for(auto &it:chars)
    {
        cout<<it;
    }
    
    return 0;
}