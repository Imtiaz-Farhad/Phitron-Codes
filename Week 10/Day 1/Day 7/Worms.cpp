#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vector<int>v(n), ps(n);

    for(int i=0; i<n; i++) cin>>v[i];
    ps[0]=v[0];

    for(int i=1; i<n; i++) ps[i]= ps[i-1]+v[i];

    int k; cin>>k;
    while(k--)
    {
        int key; cin>>key;
        int l=0, r=n-1, ans=-1;

        while(l<=r)
        {
            int mid= (l+r)/2;

            if(key <= ps[mid])
            {
                ans= mid;
                r= mid-1;
            }
            else l=mid+1;
        }
        cout<<ans+1<<endl;
    }

    return 0;
}