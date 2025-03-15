#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        vector<int>v(n);
        int total=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            total+=v[i];
        }

        if(total < s) 
        {
            cout<<-1<<endl;
            continue;
        }

        int l=0,r=0, sum=0;
        int ans=n+1;
        while(r<n)
        {
            sum+=v[r];
            if(sum <= s)
            {
                int slide= l + n-r-1;
                // cout<<slide<<endl;
                ans= min(ans, slide);
            }
            else
            {
                while(sum>s && l<=r)
                {
                    sum-=v[l];
                    l++;
                }
                if(sum<=s)
                {
                    int slide= l + n-r-1;
                    ans= min(slide, ans);
                }
                
                // ans= min(slide, ans);
            }
            r++;
        }
        cout<<ans<<endl;
    }

    return 0;
}