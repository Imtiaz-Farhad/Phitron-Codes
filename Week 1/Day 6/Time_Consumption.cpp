#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p1,p2, p3, t1, t2;
    cin>>n>>p1>>p2>>p3>>t1>>t2;

    vector<pair<int,int>>v;

    int ans=0;
    while(n--)
    {
        int l,r;
        cin>>l>>r;
        v.push_back({l,r});
    }

    for(auto x: v)
    {
        ans+=(x.second-x.first)*p1;
    }
    for(int i=0; i<v.size()-1; i++)
    {
        int level=1;
        int rem=v[i+1].first-v[i].second;
        
        while(rem>0)
        {
            if(level==1)
            {
                if(rem>=t1)
                {
                    ans+=t1*p1;
                    rem-=t1;
                }
                else
                {
                    ans+=rem*p1;
                    rem=0;
                }
                level++;
            }
            else if(level==2)
            {
                if(rem>=t2)
                {
                    ans+=t2*p2;
                    rem-=t2;
                }
                else
                {
                    ans+=rem*p2;
                    rem=0;
                }
                level++;
            }
            else
            {
                ans+=rem*p3;
                rem=0;
            }
        }
     
    }
    cout<<ans<<endl;

    return 0;
}