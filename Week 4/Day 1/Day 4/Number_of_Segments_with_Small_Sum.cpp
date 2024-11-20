#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll k; cin>>n>>k;

    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    int l=0, r=0;
    ll ans=0, sum=0;

    while(r<n)
    {
        sum+=a[r];
        if(sum<=k)
        {
            ans+=(r-l+1);
        }
        else
        {
            while(sum>k)
            {
                sum-=a[l];
                l++;
            }
            ans+=(r-l+1);
        }
        r++;
    }
    cout<<ans<<endl;

    return 0;
}