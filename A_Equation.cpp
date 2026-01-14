#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

typedef long long ll;
typedef vector<int> vi;

bool iscomposite(int n)
{
    if(n==2)return false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)return true;
    }
    return false;
}

int32_t main()
{
    fastio();
    int t;
    cin >> t;
    for(int i=2;(i+t)<=1000000000;i++)
    {
        if(iscomposite(i)&&iscomposite(i+t))
        {
            cout<<i+t<<" "<<i<<"\n";
            return 0;
        }
    }
    return 0;
}