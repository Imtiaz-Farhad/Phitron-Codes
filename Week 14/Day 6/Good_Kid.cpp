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
        int n; cin>>n;
        vector<int>v(n);

        for(int i=0; i<n; i++) cin>>v[i];

        sort(v.begin(), v.end());

        v[0]++;

        ll ans=1;
        for(int i=0; i<n; i++)
        {
            ans*= (1LL * v[i]);
        }
        cout<<ans<<endl;
    }

    return 0;
}