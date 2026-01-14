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
//     int n;
//     cin>>n;
//     int a[26]={0};
//     string s;
//     cin>>s;
//     if(n<26)
//     {
//         cout<<"NO";
//         return;
//     }
//     transform(s.begin(), s.end(), s.begin(), ::tolower);
//     rep(i,s.length())
//     {
//         char c=s[i];
//         // int n = c;
//         if('a'<=c&&c<='z')
//         {
//             a[c-'a']++;
//         }
//     }
//     rep(i,26)
//     {
//         if(a[i]==0)
//         {
//             cout<<"NO";
//             return;
//         }
//     }
//     cout<<"YES";
//     return;
// }

bool answertoProb(string s)
{
    vector<bool> seen(26,false);
    for(char c:s)
    {
        if(isalpha(c))
        {
            seen[tolower(c)-'a']= true;
        }
    }
    for(bool b:seen) if(!b) return false;
    return true;
}

int32_t main()
{
    fastio()
    int t;
    cin>>t;
    string s;
    cin>>s;
    // while(t--)
    // {
        cout<<(answertoProb(s)?"YES":"NO");
    // }
    return 0;
}