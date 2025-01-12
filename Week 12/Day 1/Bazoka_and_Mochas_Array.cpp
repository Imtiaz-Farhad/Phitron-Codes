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
        vector<int>v(n);
 
        for(int i=0; i<n; i++) cin>>v[i];
 
        int l=0, r;
 
        while(l<(n-1) && v[l]<=v[l+1])
        {
            l++;
        }
        if(l+1==n) r=0;
        else
        {
            r=l+1;
            while(r<(n-1) && v[r]<=v[r+1])
            {
                r++;
            }
        }
        
        if(r==0)
        {
            //yes
            cout<<"YES\n";
        }
        else
        {
            if(r+1==n && (v[0]>=v[r])) cout<<"YES\n";
            else cout<<"NO\n";
        }
        // cout<<l<<" "<<r;
    }
    return 0;
}