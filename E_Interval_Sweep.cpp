#include <bits/stdc++.h>
using namespace std;

int main()
{
    int o, e;
    cin >> o >> e;
    if(o==0&&e==0)
    cout<<"NO";
    else if ((0<=(o - e)&& (o - e)< 2) || (0<=(e - o)&&(e - o) < 2))
        cout << "YES";
    else
        cout << "NO";
}