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
   vi arr(n);
   for(int &it:arr)cin>>it; 
   int op=0;
   int len=1;
   for(int i=1;i<n;i++)
   {
    if(arr[i]%2==arr[i-1]%2){
        len++;
    }
    else{
        op+=len-1;
        len=1;
    }

   }
   op+=(len-1);

   cout<<op<<"\n";
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