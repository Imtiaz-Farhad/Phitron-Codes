#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin>>s;
    int k; cin>>k;

    int sz=s.size();
    int l=0, r=0;
    int ans=0;

    map<char,int>mp;

    while(r<sz)
    {
        mp[s[r]]++;

        if(mp.size()==k)
        {
            ans=max(ans, r-l+1);
        }
        else
        {
            while(mp.size()>k)
            {
                mp[s[l]]--;
                if(mp[s[l]]==0)
                {
                    mp.erase(s[l]);
                }
                l++;
            }
        }
        r++;
    }
    if(ans==0) cout<<"-1"<<endl;
    else cout<<ans<<endl;

    return 0;
}