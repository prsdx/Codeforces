#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if((d==a+b-c)||(d==a-b+c)||(a+b*c==d)||(a*b+c==d)||(a-b*c==d)||(a*b-c==d))
    cout<<"YES";
    else
    cout<<"NO";
}