#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    int k=(n*(n-1))/2;
    map<int,int>mp;
    for(int i=0; i<k; i++)
    {
        int x; cin>>x;
        mp[x]++;
    }
    vector<pair<int,int>>v;
    for(auto [x,y]: mp)
    {
        v.push_back({x,y});
    }
    sort(v.begin(), v.end());
    for(pair x:v)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    

    return 0;
}