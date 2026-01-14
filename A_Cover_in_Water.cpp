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
  int c=0;
  int co=0;
    string in;
    cin>>in;
  rep(i,n)
  {
    // cin>>in[i];
    if(in[i]=='.')
        {
            c++;
            co++;
            if(co==3)
            {
                cout<<2<<"\n";
                return;
            }            
        }
    else
    {
        co=0;
    }
    // cout<<c<<"\n";
  }
  cout<<c<<"\n";
  return;  
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