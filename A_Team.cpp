#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x+y+z>=2)
        count++;
    }
    cout << count;
}