#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;

        vector<int>v(k);
        for(int i=0; i<k; i++) cin>>v[i];

        sort(v.begin(), v.end());

        int ans=0;
        for(int i=0; i<k-1; i++)
        {
            if(v[i] != 1) ans+= v[i]-1;

            ans+= v[i];
        }
        cout<<ans<<endl;
    }

    return 0;
}