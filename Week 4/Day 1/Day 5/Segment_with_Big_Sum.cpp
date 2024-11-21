#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll k;
    cin>>n>>k;

    ll a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    ll l=0, r=0;
    ll ans=LONG_MAX;
    ll sum=0;

    while(r<n)
    {
        sum+=a[r];
        if(sum>=k)
        {
            // ans=r-l+1;
            // cout<<ans<<endl;
            int p=0;
            while(sum>=k)
            {
                sum-=a[l];
                if(sum<=k) p=1;
                l++;
            }
            // 
            if(p==1) ans=min(ans, (r-l+2));
                // cout<<r-l+2<<endl;
            else ans=min(ans, (r-l+1));
        }
        r++;
    }
    if(ans==LONG_MAX) cout<<-1<<endl;
    else cout<<ans<<endl;

    return 0;
}