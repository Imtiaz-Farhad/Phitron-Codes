#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int k=a-b;

        if(k>=0 && k%2==0) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}