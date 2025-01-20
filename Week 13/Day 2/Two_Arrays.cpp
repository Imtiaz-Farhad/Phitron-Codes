#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>a(n), b(n);

        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        bool flg=true;

        for(int i=0; i<n; i++)
        {
            if(b[i]-a[i] == 1 || b[i]-a[i] == 0);
            else flg=false;
        }

        flg ? cout<<"YES\n":cout<<"NO\n";
    }

    return 0;
}