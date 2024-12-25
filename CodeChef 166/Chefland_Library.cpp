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
        map<int,int>mp;

        for(int i=1; i<=n; i++)
        {
            int x; cin>>x;
            mp[x]=i;
        }
        int ans=0;
        for(auto [x,y]:mp)
        {
            // cout<<x<<" "<<y<<endl; 
            ans+=y;
        }
        cout<<ans<<endl;
    }

    return 0;
}