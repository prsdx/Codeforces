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
    
}

int32_t main()
{
    fastio();
    int n,t;
    cin >>n>> t;
    vector<int>arr(n);
    rep(i,n)
    {
        cin>>arr[i];
    }
    sort(all(arr));
    while(t--)
    {
        int q;
        cin>>q;
        bool found=false;
        int l=0,h=arr.size()-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]==q){
                found=true;
            }
            if(arr[mid]<q)
            l=mid+1;
            else
            h=mid-1;
        }
        
        if(found)
        {
            cout<<"found\n";
        }
        else
        {
            cout<<"not found\n";
        }
    }
}