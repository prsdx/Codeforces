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
    int t;
    cin>>t;
    string s;
    cin>>s;
   int a=count(s.begin(),s.end(),'A');
   int d= t-a;
    if(a==d)
    cout<<"Friendship";
    else if(a>d)
    cout<<"Anton";
    else
    cout<<"Danik";
    // while(t--)
    // {
    //     answertoProb();
    // }
    return 0;
}