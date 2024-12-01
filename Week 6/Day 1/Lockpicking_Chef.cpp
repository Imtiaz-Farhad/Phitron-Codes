#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        vector<char>a(n), b(s);

        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<s; i++) cin>>b[i];

        int ans=INT_MAX;

        //brute force

        for(int i=0; i<=n-s; i++)
        {
            int sum=0;
            for(int j=0; j<s; j++)
            {
                int p=abs(int(a[i+j])-int(b[j]));
                if(p>5) sum+=(10-p);
                else sum+=p;
            }
            ans=min(ans, sum);
        }
        cout<<ans<<endl;
        // cout<<int('0');
    }

    return 0;
}