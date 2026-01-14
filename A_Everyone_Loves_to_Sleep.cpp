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
    int n,H,M;
    cin>>n>>H>>M;
    int convs=H*60+M;
    int time=INT_MAX;
    while(n--)
    {   
        int h,m;
        cin>>h>>m;
int temp = h * 60 + m;
int diff;
if (temp >= convs)
    diff = temp - convs;
else
    diff = 24 * 60 - (convs - temp); // next day

time = min(time, diff);

        
    }
    int hour=time/60;
    time-=hour*60;
    cout<<hour<<" "<<time<<"\n";
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