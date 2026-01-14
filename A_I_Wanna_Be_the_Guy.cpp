#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

//Macros
#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

//Typedef
typedef long long ll;
typedef vector<int> vi;

// void answertoProb()
// {
    
// }

int32_t main()
{
    fastio()
    int n;
    cin>>n;
    vector<bool> pass(n,false);
    int p,q;
    cin>>p;
    // vi x;
    rep(i,p)
    {
        int m;
        cin>>m;
        pass[m-1]=true;
    }
    // cin>>x[i];
    cin>>q;
    // vi y;
    rep(i,q)
    {
        int m;
        cin>>m;
        pass[m-1]=true;
    }

    rep(i,n)
    {
        if(!pass[i])
        {
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
    // cin>>y[i];

    
    // while(t--)
    // {
    //     answertoProb();
    // }
    return 0;
}