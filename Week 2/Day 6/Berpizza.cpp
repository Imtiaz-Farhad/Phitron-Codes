#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    int customerno=1;
    set<pair<int,int>>s;
    multiset<pair<int,int>>ms;
    vector<int>ans;

    for(int i=1; i<=n; i++)
    {
        int type, money;
        cin>>type;
        if(type==1)
        {
            cin>>money;
            //monocarp
            s.insert({customerno,money});
            //polycarp
            ms.insert({money,-customerno});
            customerno++;
        }
        else if(type==2)
        {
            int pos=s.begin()->first, money= s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ms.erase({money, -pos});
        }
        else
        {
            int pos, money;
            pos=-ms.rbegin()->second;
            money=ms.rbegin()->first;
            ans.push_back(pos);
            ms.erase(--ms.end());
            s.erase({pos,money});
        }
        
    }
    for(auto val: ans) cout<<val<<endl;

    

    return 0;
}