#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b;
    cin>>a>>b;

    ((a%b==0)||(b%a==0)) ? cout<<"Multiples":cout<<"No Multiples";
    
}