#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    for(int p=1; p<=t; p++)
    {
        int n,k;
        cin>>n>>k;
        long long int ans=0;
        while(n--)
        {
            int x,y;
            cin>>x>>y;
            ans+=k/x;
        }
        cout<<"Case "<<p<<": "<<ans<<endl;
    }

    return 0;
}