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

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(), v.end());

        int a=v[n-1]-v[2];
        int b= v[n-3]-v[0];
        int c= v[n-2]-v[1];

        int ans= min(a,min(b,c));

        cout<<ans<<endl;
    }
    

    return 0;
}