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
    int n,a,b;
    cin>>n>>a>>b;
    if(a+b<(n-1)||a==b&&a==n)cout<<"Yes\n";
    else cout<<"No\n";
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