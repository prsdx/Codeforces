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
    vector<int> arr(n);
    rep(i,n){
        cin >> arr[i];
    }
    sort(all(arr));
    int current=arr[0];
    int eat=1;
   for(int i=1;i<n;i++)
    {
        
        if(current<arr[i])
        {
            current=arr[i];
            eat++;
        }
    }
    cout<<eat<<endl;
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