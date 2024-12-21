#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>v(n);
        map<int,int>freq;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        for(int i=0; i<n; i++)
        {
            freq[v[i]]++;
            cout<<char(96+freq[v[i]]);
        }
        cout<<endl;
    }

    
    return 0;
}