#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    stack<string>stk;
    
    for(int i=0; i<n; i++)
    {
        string s; cin>>s;
        stk.push(s);
    }
    map<string,int> mp;
    while(!stk.empty())
    {
        string tp=stk.top();
        if(mp[tp]==0)
        {
            int sz= tp.size();
            cout<<tp.substr(sz-2);
        }
        mp[tp]++;
        stk.pop();
    
    }

    return 0;
}