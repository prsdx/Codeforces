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
    int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    bool ans=false;
    if(abs(b-c)<=1)
    {
        if(a!=0 && b!=0)
        {
            if(b>0 || c>0)
            {
                ans = true;
            }
            else
            {
                ans=true;
            }
        }
    }
    if(ans)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}