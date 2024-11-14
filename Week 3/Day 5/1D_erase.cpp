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
        string s; cin>>s;
        int ans=0;
        

        int l=0, r=0;

        while(r<n)
        {
            if(s[r]=='B')
            {
                ans++;
                r+=k;
            }
            
            else r++;
        }
        cout<<ans<<endl;
        
    }

    return 0;
}