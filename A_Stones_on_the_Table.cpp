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

    int j,min=0;
    for(int i=1;i<s.length();i++)
    {   
        j=i-1;
        if(s[i]==s[j])
        min++;
    }
    cout<<min;

    // while(t--)
    // {
    //     answertoProb();
    // }
    return 0;
}