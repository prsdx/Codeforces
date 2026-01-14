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
    string s;
    cin>>s;
    int l=0,u=0;
    for(auto i:s)
    {
        if(i>='a'&& i<='z')
        l++;
        else
        u++;
    }
    if(l<u)
    {
        for(int a=0;a<s.length();a++)
        s[a]=toupper(s[a]);
    }
    else
    {
        for(int a=0;a<s.length()-1;a++)
        s[a]=tolower(s[a]);
        
    }

    cout<<s<<"\n";

}

int32_t main()
{
    fastio();
    // int t;
    // cin >> t;
    // while(t--)
    // {
        answertoProb();
    // }
    // return 0;
}