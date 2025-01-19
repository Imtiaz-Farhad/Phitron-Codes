#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n, s, m;
        cin>>n>>s>>m;

        int interval=0;

        vector<pair<int,int>>v(n);
        for(int i=0; i<n; i++)
        {
            int l,r;
            cin>>l>>r;
            v[i]={l,r};
        }
        interval=v[0].first;
        
        for(int i=1; i<n; i++)
        {
            interval= max(interval, (v[i].first- v[i-1].second));
        }
        interval= max(interval, m-v[n-1].second);

        // cout<<interval<<endl;
        if(interval >= s) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}