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
    int t;
    cin >> t;
    int arr[t][t];
    rep(i,t)
    {
        string s;
        cin>>s;
        rep(j,t)
        {
            arr[i][j]=s[j]-'0';
        }
    }
    int prev=arr[0][0];
    rep(i,t-1)
    {
        arr[i][0]=arr[i+1][0];
    }
    rep(j,t-1)
    {
        arr[t-1][j]=arr[t-1][j+1];
    }
    for(int i=t-1;i>0;i--)
    {
        arr[i][t-1]=arr[i-1][t-1];
    }
    for(int j=t-1;j>0;j--)
    {
        arr[0][j]=arr[0][j-1];
    }
    arr[0][1]=prev;
    rep(i, t) {
    rep(j, t) {
        cout << arr[i][j];
    }
    cout << '\n';
}
}