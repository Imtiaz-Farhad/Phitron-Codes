#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        char ch[n];
        map<char, int>mp;
        for(int i=0; i<n; i++)
        {
            char c;
            cin>>c;
            mp[c]++;
        }
        int odd_count=0;
        for(auto [x,y]:mp)
        {
            if(y%2) odd_count+=y;
        }
        // for(int x: odd) cout<<x<<" ";
        // cout<<endl;
        // for(int x: even) cout<<x<<" ";
        int minimumRemove= max(0, odd_count-1);
        
            if((k >= minimumRemove) && ((n - k) % 2 == (odd_count % 2)))
            cout<<"YES\n";
            else cout<<"NO\n";
        
    }
    

    return 0;
}