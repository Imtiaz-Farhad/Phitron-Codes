#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    bool flg=false;

    for(int i=0; i<(1<<n); i++)
    {
        int ans=0;
        for(int k=0; k<n; k++)
        {
            if((i>>k)&1) ans+=v[k];
            else ans-=v[k];
        }
        if((ans%360)==0) flg=true;
        cout<<ans<<endl;
    }
    if(flg) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}