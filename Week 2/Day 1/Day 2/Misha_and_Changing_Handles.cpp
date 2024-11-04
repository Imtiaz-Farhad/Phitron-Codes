#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    map<string,string>result, change;
    for(int i=0; i<n; i++)
    {
        string a,b;
        cin>>a>>b;

        if(change.find(a) != change.end())
        {
            string s;
            s= change[a];
            result[s]=b;
            change.erase(a);
            change[b]=s;
        }
        else
        {
            result[a]=b;
            change[b]=a;
        }

        
    }
    cout<<result.size()<<endl;
    for(auto [x,y]:result)
    {
        cout<<x<<" "<<y<<endl;
    }

    return 0;
}