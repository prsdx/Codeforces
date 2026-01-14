#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

   for(int i=n+1;i<9500;i++){
    set<int>digits;
    int t=i;
    while(t!=0)
    {
        int re=t%10;
        digits.insert(re);
        t/=10;
    }
    if(digits.size()==4)
    {
        cout<<i;
        return 0;
    }
    else
    continue;
   }

}