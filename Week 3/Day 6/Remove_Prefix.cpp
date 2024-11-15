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
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];

        set<int>s;
        int ans=0;
        for(int i=n-1; i>=0; i--)
        {
            if(s.count(a[i])) break;

            s.insert(a[i]);
            ans++;
        }
        cout<<n-ans<<endl;
    
    }

    return 0;
}