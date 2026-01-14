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
    int n;cin>>n;
    vi arr(n);
    vi fre(101,0);
    rep(i,n){
        cin>>arr[i];
        fre[arr[i]]++;
    }
    // sort(all(arr));
    int mexa=0,mexb=0;
    while(fre[mexa]>=1)mexa++;
    while(fre[mexb]>=2)mexb++;
    cout<<mexa+mexb<<"\n";

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