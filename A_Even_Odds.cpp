#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

//Macros
#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

//Typedef
typedef long long ll;
typedef vector<int> vi;

// void answertoProb()
// {
    
// }

int32_t main()
{
    fastio()
    ll n,k;
    cin>>n>>k;

    // This approach is creating taking o(n) memory and time
    // vi v;
    // for(int i=1;i<=n;i+=2)
    // v.push_back(i);
    //  for(int i=2;i<=n;i+=2)
    // v.push_back(i);

    //Second approach
    ll odd= (n+1)/2;

    if(k<=odd)
    {
        cout<<2*k-1;
    }
    else
    {
        cout<<2*(k-odd);
    }

     
    // cout<<v[k-1];

    return 0;
}