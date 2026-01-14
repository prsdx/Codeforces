#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin >> n;
        // string ans="";
        vector<long long> ans;
        long long curr=10;
        while(curr+1<=n)
        {
            if(n%(curr+1)==0)
            {
                ans.push_back(n/(curr+1));
                
            }
            curr*=10;
        }
        cout<<(int)ans.size()<<"\n";
        for(int i=(int)ans.size()-1;i>=0;i--)
        {
            cout<<ans[i]<<" ";
        }
        if(ans.size())cout<<"\n";
        

    }
}