#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        string p="ADVITIYA";

        int ans=0;

        for(int i=0; i<s.size(); i++)
        {
            // cout<<s[i]<<" -> "<<p[i]<<endl;
            // cout<<s[i]-p[i]<<endl;
            if(s[i]>p[i])
            {
                // cout<<26-(s[i]-p[i])<<endl;
                ans+=(26-(s[i]-p[i]));
            }
            else ans+=abs(s[i]-p[i]);
        }
        cout<<ans<<endl;
    }

    return 0;
}