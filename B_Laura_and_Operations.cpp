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
 int a,b,c;
 cin>>a>>b>>c;
 int aa=0,ab=0,ac=0;
 if((b+c)%2==0)aa=1;   
 if((a+c)%2==0)ab=1;   
 if((a+b)%2==0)ac=1;
 cout<<aa<<" "<<ab<<" "<<ac<<"\n";
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