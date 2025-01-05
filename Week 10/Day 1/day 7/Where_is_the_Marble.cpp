#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt=0;

    while(true)
    {
        int n,k;
        cin>>n>>k;
        if(n==0 && k==0) break;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        sort(v.begin(), v.end());

        cout<<"CASE# "<<++cnt<<":\n";

        while(k--)
        {
            int key; cin>>key;
            int l=0, r=n-1, ans=-1;

            while(l<=r)
            {
                int mid= (l+r)/2;

                if(key == v[mid]) ans=mid;

                if(key <= v[mid])
                {
                    // ans= mid;
                    // l=mid+1;
                    r=mid-1;
                }
                else l=mid+1;
            }
            

            if(ans==-1) cout<< key<<" not found\n";
            else cout<<key<<" found at "<<ans+1<<endl;
        }
    }

    return 0;
}