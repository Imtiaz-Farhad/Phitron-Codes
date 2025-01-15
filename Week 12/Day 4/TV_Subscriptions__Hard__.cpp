#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n, k, d; 
        cin>>n>>k>>d;

        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        int l=0, r=0;

        map<int,int>mp;

        int ans=INT_MAX;

        while(r<n)
        {
            mp[v[r]]++;
            
            if(r-l+1==d)
            {
                int s= mp.size();
                ans= min(ans,s);
                mp[v[l]]--;
                if(mp[v[l]]==0) mp.erase(v[l]); 
                l++;
            }
            r++;
        }
        cout<<ans<<endl;

    }
    return 0;
}