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
        vector<int>a(n), h(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>h[i];

        int l=0, r=0, sum=0, ans=0;
        while(r<n)
        {
            if (r > 0 && h[r - 1] % h[r] != 0) 
            {
                l = r;
                sum = 0;
            }
            sum+=a[r];

            if(sum <= k)
            {
                ans= max(ans, r-l+1);
            }
            else
            {
                while(sum > k && l<=r)
                {
                    sum-=a[l];
                    l++;
                }
                // if(sum<=k) ans= max(ans, r-l+1);
            }
            r++;
        }
        cout<<ans<<endl;
    }

    return 0;
}