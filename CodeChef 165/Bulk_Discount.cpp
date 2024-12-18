#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<ll>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),  v.end());
        int k=0;
        ll ans=0;
        for(int i=0; i<n; i++)
        {
            ll p=v[i]-k;
            if(p<0) p=0;
            ans+=p;
            k++;
        }
        cout<<ans<<endl;
    }

}
