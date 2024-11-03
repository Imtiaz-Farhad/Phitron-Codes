#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;
    vector<int>v;

    for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        if(a==k) continue;
        v.push_back(a);
    }

    for(int x: v) cout<<x<<" ";
    cout<<endl;
    return 0;
}