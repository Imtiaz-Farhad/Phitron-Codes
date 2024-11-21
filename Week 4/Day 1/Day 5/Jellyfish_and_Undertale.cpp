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
        int a,b,n;
        cin>>a>>b>>n;

        ll ans=0;

        for(int i=0; i<n; i++)
        {
            int x; cin>>x;
            int k= min(a, 1+x);
            k--;
            ans+=k;
        }
        ans+=b;
        cout<<ans<<endl;
    }

    return 0;
}