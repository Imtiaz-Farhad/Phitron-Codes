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
        vector<ll>v(n);

        ll g1=0, g2=0;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        
        for(int i=0; i<n; i+=2)
        {
            g1= __gcd(g1,v[i]);
        }
        for(int i=1; i<n; i+=2)
        {
            g2= __gcd(g2,v[i]);
        }
        
        long long ans=0;
        bool flg= true;

        for(int i=1; i<n; i+=2)
        {
            if(v[i]%g1==0)
            {
                flg=false;
            }
        }

        if(flg)
        {
            ans= g1;
        }
        else
        {
            flg=true;
            for(int i=0; i<n; i+=2)
            {
                if(v[i]%g2==0) flg=false;
            }
            if(flg) ans=g2;
        }

        cout<<ans<<endl;
    }

    return 0;
}