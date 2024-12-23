#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vector<int>v;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if((n/i) != i) v.push_back(n/i);
        }
    }
    sort(v.begin(), v.end());
    for(int x:v) cout<<x<<" ";

    return 0;
}