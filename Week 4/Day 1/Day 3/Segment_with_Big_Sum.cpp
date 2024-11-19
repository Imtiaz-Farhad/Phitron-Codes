#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll s;
    cin>>n>>s;
    ll a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    int l=0, r=0;
    ll sum=0;
    int ans=0;
    bool flg=false;

    while(r<n)
    {
        sum+=a[r];
        if(sum<=s)
        {
            // if(flg)
                // ans= max(ans, r-l+1);
                cout<<r-l+1<<endl;
            r++;
        }
        else
        {
            flg=true;
            sum-=a[l];
            l++;
            r++;
        } 
    }
    // cout<<ans<<endl;

    return 0;
}