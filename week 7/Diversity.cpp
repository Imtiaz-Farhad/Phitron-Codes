#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin>>n>>k;

    map<int,int>mp;

    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        if(mp[x]==0)
        {
            mp[x]=i+1;
        }
    }
    if(k<=mp.size())
    {
        cout<<"YES"<<endl;
        for(auto x : mp) cout<<x.second<<" ";
        cout<<endl;
    }
    else cout<<"NO\n";
    

    return 0;
}