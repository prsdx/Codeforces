#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;
    if(k>=60)
    {
        cout<<"22:";
        if((k%60)<10)
        {
            cout<<"0"<<k%60;
        }
        else
        {
            cout<<k%60;
        }
    }
    else
    {
        cout<<"21:";
        if((k%60)<10)
        {
            cout<<"0"<<k%60;
        }
        else
        {
            cout<<k%60;
        }
    }
}