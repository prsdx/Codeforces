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
    rep(i,n){
        cin>>arr[i];
    }
    ll noofsub=n;
    ll len=1;
   for(int i=1;i<n;i++){
    if(arr[i]>arr[i-1])
    {
        len++;
    }
    else
    {
        len=1;
    }
    noofsub+=(len-1);
   }
   cout<<noofsub<<"\n";

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