#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        map<int,int>mp;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }

        sort(v.begin(), v.end());

        int l=0, r=n-1;

        vector<pair<int, int>>pr;

        int ans=0;
        bool flg=false;

        while(l<r)
        {
            if(mp[v[l]]>=k && mp[v[r]]>=k)
            {
                pr.push_back({v[l],v[r]});
                flg=true;
            }
            l+=mp[v[l]];
            r-=mp[v[r]];
        }
        for(auto [x,y]: pr)
        {
            ans=max(ans, y-x);
        }
        if(flg) cout<<ans<<endl;
        else cout<<-1<<endl;
    }


    return 0;
}