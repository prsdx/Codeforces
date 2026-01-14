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
    int arr[n];
    // int sw=0;
    int even=0;
    int eveni=0;
    int outoforder=0;
    rep(i,n)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        even++;
        if(i%2==0)
        eveni++;
        if(arr[i]%2!=i%2)
        {
            outoforder++;
        }
    }
    if(even!=eveni)
    {
        cout<<-1<<"\n";
        return;
    }
    cout<<outoforder/2<<"\n";
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