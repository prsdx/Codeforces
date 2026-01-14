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
    int op=0;
    while(n!=1)
    {
        if(n%6==0){
            n/=6;
            op++;
        }
        else if((n*2)%6==0)
        {
            n=(n*2)/6;
            op+=2;
        }
        else break;

    }
    cout<<(n==1?op:-1)<<endl;
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