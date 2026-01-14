#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,s;
    cin>>k>>s;
    int mi=min(k,s);
    long long cal=((mi+2)*(mi+1))/2;
    cout<<cal;
}