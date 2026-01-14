#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

typedef long long ll;
typedef vector<int> vi;



int32_t main()
{
    fastio();
    int t;
    cin >> t;
    vi arr(t);
    int maxw=INT_MIN;
    for(auto &it:arr)
    {
        cin>>it;
        maxw=max(it,maxw);
    }
    int w=0;
    for(auto it:arr)
    {
        w+=maxw-it;
    }
    cout<<w<<"\n";

    return 0;
}