#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s;
        cin>>s;
        string r=s;
        reverse(r.begin(), r.end());

        if(s<=r) cout<<s<<endl;
        else cout<<r+s<<endl;
    }

    return 0;
}