#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a,b,p,q;
    cin>>n>>a>>b>>p>>q;

    ll red=0, green=0, comb=0;

    red= n/a;
    green= n/b;
    ll k= (a/__gcd(a,b))*b;
    comb= n/k;

    if(p>q)
    {
        green-=comb;
    }
    else 
    {
        red -= comb;
    }

    ll ans= red*p + green*q;
    cout<<ans<<endl;

    return 0;
}