#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<string,string>mp;
    int n,m;
    cin>>n>>m;

    for(int i=0; i<n; i++)
    {
        string a, b;
        cin>>a>>b;
        b+=";";
        mp[b]=a;
    }

    for(int i=0; i<m; i++)
    {
        string a,b; 
        cin>>a>>b;
        cout<<a<<" "<<b<<" #"<<mp[b]<<endl;
    }


  



    return 0;
}