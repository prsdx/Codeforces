#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

typedef long long ll;
typedef vector<int> vi;


int32_t main()
{
    fastio();
    int n;
    string s;
    cin>>n;
    cin>>s;
    int d=0,r=0,x=0,y=0;
    for(int i=0;i<n;i++)
    {       
        if(s[i]=='R')
        {
            r++;
            d=r%4;
        }      
        else
        {
            if(d==0)
            {
                x++;
            }
            else if(d==1)
            {
                y--;
            }
            else if(d==2)
            {
                x--;
            }
            else
            {
                y++;
            }
        }
    }
    cout<<x<<" "<<y;
    return 0;
}