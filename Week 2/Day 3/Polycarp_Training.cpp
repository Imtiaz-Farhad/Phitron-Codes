#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    multiset<int>s;
    for(int i=0; i<n; i++) 
    {
        int x; cin>>x;
        s.insert(x);
    }
    int contest=0;
    for(int i=1; i<=n; i++)
    {
        if(s.lower_bound(i) != s.end())
        {
            auto it= s.lower_bound(i);
            contest++;
            // cout<<*it<<endl;
            s.erase(it);
            // cout<<*s.find(i)<<endl;
        }
    }
    cout<<contest<<endl;

    return 0;
}