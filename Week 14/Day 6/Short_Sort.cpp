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
        int p=0;
        
        if(s[0]=='a') p++;
        if(s[1]=='b') p++;
        if(s[2]=='c') p++;

        if(p==0) cout<<"NO\n";
        else cout<<"YES\n";
    }

    return 0;
}