#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

typedef long long ll;
typedef vector<int> vi;

void answertoProb()
{
    ll n;
    cin>>n;
    ll curr=0,curr_p=0;
    rep(i,n)
    {
        ll a;
        cin>>a;
        curr=a;
        curr_p=max(0LL,curr_p+curr);

    }
    cout<<curr_p<<"\n";
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