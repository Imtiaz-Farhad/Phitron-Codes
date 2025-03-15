#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll>v(n), ps(n);
        vector<char>s(n);
        for(int i=0; i<n; i++) cin>>v[i];

        for(int i=0; i<n; i++) cin>>s[i];
        ps[0]= v[0];
        for(int i=1; i<n; i++) ps[i]= v[i]+ps[i-1];

        // for(int x: ps) cout<<x<<" ";
        ll l=0, r=n-1, ans=0;

        while(l<=r)
        {
            if(s[l]=='L' && s[r]=='R')
            {
                ans+= (ps[r]-ps[l]+v[l]);
                l++; r--;
            }
            else if(s[l]=='R') l++;
            else if(s[r]=='L') r--;
        }
        cout<<ans<<endl;
        
    }



    return 0;
}