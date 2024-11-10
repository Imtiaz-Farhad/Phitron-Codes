#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    // int a[n], b[m];
    // for(int i=0; i<n; i++) cin>>a[i];
    // for(int j=0; j<m; j++) cin>>b[j];
    map< int, int> a, b;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        a[x]++;
    }
    for(int i=0; i<m; i++)
    {
        int x; cin>>x;
        b[x]++;
    }
    long long int ans=0;
    for(auto [x,y]:b)
    {
        // cout<<x<<" "<<y<<endl;
        // // cout<<y<<" "<<a[x]<<endl;
        if(a[x])
        {
            // cout<<y<<" "<<a[x]<<endl;
            ans+=(1LL * y*a[x]);
        }
    }
    cout<<ans<<endl;
    

    return 0;
}