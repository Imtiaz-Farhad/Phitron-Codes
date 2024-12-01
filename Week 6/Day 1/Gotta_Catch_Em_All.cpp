#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n, x, y;
        cin>>n>>x>>y;

        int ans=0;

        for(int i=1; i<=n; i++)
        {
            int k; cin>>k;
            int p= k*x;
            if(p>y) ans+=y;
            else ans+=p;
        }
        cout<<ans<<endl;
    }

    return 0;
}