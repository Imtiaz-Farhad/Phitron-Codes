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
        map<int, int>mp;

        for(int i=1; i<= n; i++)
        {
            int x; cin>>x;
            mp[x]++;
        }

        int ans=0;

        for(auto [x,y]:mp)
        {
            if(y>=3)
            {
                ans+= y/3;
            }
            // cout<<x<<" "<<y<<endl;
        }
        cout<<ans<<endl;
    }

    return 0;
}