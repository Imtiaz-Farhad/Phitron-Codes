#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    stack<string>s;
    for(int i=1; i<=n; i++)
    {
        string a; cin>>a;
        s.push(a);
    }
    map<string, int>mp;
    while(!s.empty())
    {
        string p=s.top();
        if(mp[p]==0)
        {
            cout<<p<<endl;
        }
        mp[p]++;
        s.pop();
        
        
    }

    return 0;
}