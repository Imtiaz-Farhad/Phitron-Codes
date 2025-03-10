//Question Link: https://codeforces.com/problemset/problem/1791/G1

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n, c;
        cin>>n>>c;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            int x; cin>>x;
            v[i]= x+i+1;
        }
        sort(v.begin(), v.end());
        // for(int x:v) cout<<x<<" ";
        int ans=0;
        int i=0;
        while (i < v.size() && c >= v[i])
        {
            if(c<v[i]) break;
            ans++;
            c-=v[i];
            i++;
        }
        cout<<ans<<endl;
    }

    return 0;
}