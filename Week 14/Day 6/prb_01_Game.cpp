#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int zero=0, one=0;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0') zero++;
            else one++;
        }

        int ans= min(zero, one);

        if(ans%2) cout<<"DA\n";
        else cout<<"NET\n";
    }

    return 0;
}