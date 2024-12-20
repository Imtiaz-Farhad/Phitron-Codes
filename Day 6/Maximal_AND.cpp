#include<bits/stdc++.h>
using namespace std;

const int maxBit=30;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n,step;
        cin>>n>>step;
        vector<int>v(n);
        
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            // maxBit= max(maxBit,__lg(v[i]));
        }
        vector<int>zeros(maxBit+1);
        int AND=v[0];
        for(int i=0 ; i<n; i++)
        {
            AND &= v[i];
            for(int k=maxBit; k>=0; k--)
            {
                if(!((v[i]>>k)&1))
                    // cout<<"1 ";
                // else 
                // {
                    // cout<<"0 ";
                    zeros[k]++;
                // }
            }
            // cout<<endl;
        }
        // cout<<AND<<endl;
        int ans=0;
        for(int k=maxBit; k>=0; k--)
        {
            if(zeros[k]<=step)
            {
                int p= (1LL<<k);
                ans+=p;
                step-= zeros[k];
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}