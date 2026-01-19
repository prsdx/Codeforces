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
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        v.push_back({t,i});
    }
    sort(v.begin(),v.end());
    vi b(n);
    ll curr=1;
    ll time=0;
    for(int i=n-1;i>=0;i--)
    {
        b[v[i].second]=curr;
        time+=(2*(v[i].first*abs(curr)));
        if(curr>0)
        curr*=-1;
        else
        {
            curr*=-1;
            curr++;
        }

    }
    cout<<time<<"\n";
    cout<<0<<" ";
    for(auto it:b)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
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