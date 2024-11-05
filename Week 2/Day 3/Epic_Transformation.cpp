#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n; 
    multiset<int>ms;
    set<int>s;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        ms.insert(x);
        s.insert(x);
    }
    // for(auto x: s) cout<<x<<endl;
    auto it= s.begin();
    auto it2= s.begin();
    it2++;
    // auto it2= it++;

    cout<<*it2<<" ";

    if(ms.find(*it) != ms.end() && ms.find(*++it2) != ms.end())
    {
        ms.erase(it);
        ms.erase(it2);
    }
    cout<<ms.size();
    return 0;
}