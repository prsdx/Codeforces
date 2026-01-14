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
    ll s,k,m;
    cin>>s>>k>>m;
    ll n=m/k;
    ll rem=m%k;
    if(s<=k)
    {
        cout<<max(0LL,s-rem)<<"\n";
    }
    else
    {
        if(n%2==0)
        cout<<s-rem<<"\n";
        else
        cout<<k-rem<<"\n";
    }
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