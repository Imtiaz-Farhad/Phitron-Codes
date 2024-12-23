#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a,k;
    cin>>a>>k;

    vector<ll>v;
    for(ll i=1; i*i<=a; i++)
    {
        if(a%i==0)
        {
            v.push_back(i);
            if((a/i) != i) v.push_back(a/i);
        }
    }
    sort(v.begin(), v.end());

    if(v.size()>=k)
    {
        cout<<v[k-1]<<endl;
    }
    else cout<<-1<<endl;

    return 0;
}