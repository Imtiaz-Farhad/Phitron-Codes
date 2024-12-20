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
        ll n; cin>>n;
        int highBit=__lg(n);
        deque<ll>ans;
        for(int i=0; i<=highBit; i++)
        {
            if((n>>i)&1)
            {
                ll value= n-(1LL<<i);
                if(value > 0)
                    ans.push_front(value);
            }
        }

        ans.push_back(n);
        cout<<ans.size()<<endl;
        for(int x:ans) cout<<x<<" ";
        cout<<endl;
    }

    return 0;
}