#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    int m;
    string a, b, c;
    cin >> t;

    while (t--)
    {
        cin >> n;
        cin >> a;
        cin >> m;
        cin >> b >> c;
        // Approach 1
        //  int tr=0;
        //  for(int i=0;i<b.length();i++)
        //  {
        //      if(c[i]=='D')
        //      {
        //          // char d = b[tr];
        //          a.insert(a.length(),1,b[tr]);
        //      }
        //      else
        //      {
        //          a.insert(0,1,b[tr]);
        //      }
        //      tr++;
        //  }

        // Approach 2
        string fr = "";
        int tr = 0;
        for (char i : c)
        {
            if (i == 'D')
            {
                a.push_back(b[tr]);
            }
            else
            {
                fr += b[tr];
            }
            tr++;
        }
        reverse(fr.begin(), fr.end());
        cout << fr + a << "\n";
    }
}