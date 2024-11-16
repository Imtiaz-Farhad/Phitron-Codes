#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        bool ans=false;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            // if(a[i]==0) continue;
            mp[a[i]]++;
        }
        
        if((mp.size()==2 && mp[0] != 0)||(mp.size()==1)) ans=true;
        ans? cout<<"YES\n": cout<<"NO\n";
    }

    return 0;
}