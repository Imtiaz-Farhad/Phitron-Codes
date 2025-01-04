#include<bits/stdc++.h>
using namespace std;

int n;
vector<int>v, ps;

int dp(int l, int r, int key, int ans)
{
    if(l>r) return ans;

    int mid= (l+r)/2;

    if(key <= ps[mid])
    {
        ans= mid;
        return dp(l, mid-1, key, ans);
    }
    else
    {
        return dp(mid+1, r, key, ans);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n;

    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        v.push_back(x);
    }
    ps.push_back(v[0]);

    for(int i=1; i<n; i++)
    {
        ps.push_back(ps[i-1]+ v[i]);
    }

    // for(int x:ps) cout<<x<<" ";


    int k; cin>>k;
    while(k--)
    {
        int key; cin>>key;

        int ans= dp(0, n-1, key, -1);
        
        cout<<ans+1<<endl;
    }

    return 0;
}