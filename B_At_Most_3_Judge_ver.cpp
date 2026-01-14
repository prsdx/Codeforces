#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

typedef long long ll;
typedef vector<int> vi;
bool sum[3000001];

int32_t main()
{
    fastio();
    
    int n,w;
    cin>>n>>w;
    vi arr(n);
    for(auto &it:sum)
    {
        it=false;
    }
    for(auto &it:arr)
    {
        cin>>it;
    }
    int c=0;
    for(auto it:arr)
    {
        sum[it]=true;
    }
    rep(i,n)
    {
        for(int j=i+1;j<n;j++)
        {
            sum[arr[i]+arr[j]]=true;
        }
    }
    rep(i,n)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                sum[arr[i]+arr[j]+arr[k]]=true;
            }
        }
    }
    for(int i=1;i<=w;i++)
    {
        if(sum[i]==true)c++;
    }
    cout<<c<<"\n";
    return 0;
}