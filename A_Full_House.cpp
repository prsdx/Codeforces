#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr(5);
    int freq[14]={0};
    for(int &i:arr){
        cin>>i;
        freq[i]++;
    }
    int cnt1=0,cnt2=0;
    for(int i=0;i<14;i++)
    {
        if(freq[i]==2)
        cnt1=1;
        if(freq[i]==3)
        cnt2=1;
    }
    if(cnt1&&cnt2)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }

}