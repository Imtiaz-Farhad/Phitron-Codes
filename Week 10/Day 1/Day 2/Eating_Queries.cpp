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

        vector<int>v(n), ps(n);
        for(int i=0; i<n; i++) cin>>v[i];

        sort(v.rbegin(), v.rend());

        ps[0]=v[0];

        for(int i=1; i<n; i++)
        {
            ps[i]= ps[i-1] + v[i];
        }

        // for(int x:v) cout<<x<<" ";
        // cout<<endl;
        // for(int x:ps) cout<<x<<" ";

        for(int i=1; i<=k; i++)
        {
            int key; cin>>key;
            int l=0, r=n-1;

            int ans=n;

            while(l<=r)
            {
                int mid= (l+r)/2;
                if(key <= ps[mid])
                {
                    r=mid-1;
                    ans=mid;
                }
                else l=mid+1;
            }

            if(ans==n) cout<<-1<<endl;
            else cout<<ans+1<<endl;

        }

    }

    return 0;
}