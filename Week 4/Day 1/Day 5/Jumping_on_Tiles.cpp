#include<bits/stdc++.h>
using namespace std;

bool cmd(pair<int,int>a, pair<int,int>b)
{
    return a.first<b.first;
}
bool cnd(pair<int,int>a, pair<int,int>b)
{
    return a.first>b.first;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int sz= s.size();

        int first=int(*s.begin())-96;
        int last=int(*s.rbegin())-96;

        bool asc;
        int mn=min(first,last);
        int mx=max(first, last);
        if(mn==first) asc=true;
        else asc=false;

        
        vector<pair<int,int>>v;

        for(int i=1; i<sz-1; i++)
        {
            int x= int(s[i])-96;
            if(x>=mn && x<=mx)
                v.push_back({int(s[i])-96, i+1});
        }
        
        if(asc==true) sort(v.begin(), v.end(), cmd);
        else sort(v.begin(), v.end(), cnd);
        // for(auto[x,y]:v) cout<<x<<endl;
        int ans=0, step=0;
        if(v.size()==0)
        {
            ans=abs(last-first);
            step=2;
        }
        else
        {
            for(int i=0; i<v.size()-1; i++)
            {
                ans+=abs(v[i+1].first-v[i].first);
                step++;
                // cout<<v[i].first<<endl;
            }
            ans+=abs(v[0].first-first);
            ans+=abs(last-v[v.size()-1].first);
            step+=3;
        }
         
        cout<<ans<<" "<< step<<endl;
        cout<<"1 ";
        for(auto[x,y]:v)
        {
            cout<<y<<" ";
        }
        cout<<sz<<endl;
    }


    return 0;
}