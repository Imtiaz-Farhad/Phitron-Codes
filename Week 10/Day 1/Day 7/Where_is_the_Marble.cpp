#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true)
    {
        int n,k;
        cin>>n>>k;
        if(n==0 && k==0) break;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        sort(v.begin(), v.end());

        while(k--)
        {
            int key; cin>>key;
            int l=0, r=n-1, ans=-1;

            while(l<=r)
            {
                int mid= (l+r)/2;

                if(key == v[mid])
                {
                    ans= mid;
                }
                else if(key > mid) l=mid+1;
                else r=mid-1;
            }
            cout<<ans+1<<endl;
        }
    }

    return 0;
}