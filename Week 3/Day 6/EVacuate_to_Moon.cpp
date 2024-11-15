#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        ll n,m,h;
        cin>>n>>m>>h;
        priority_queue<ll>a, b;
        for(int i=0; i<n; i++)
        {
            ll x; cin>>x;
            a.push(x);
        }
        for(int i=0; i<m; i++)
        {
            ll  x; cin>>x;
            b.push(x);
        }
        ll ans=0;
        while(!a.empty() && !b.empty())
        {
            ll p=b.top()*h;
            if(p>a.top()) ans+=a.top();
            else ans+=p;
            a.pop();
            b.pop();
        }
        cout<<ans<<endl;
    }

    return 0;
}