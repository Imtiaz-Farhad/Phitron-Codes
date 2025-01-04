#include<bits/stdc++.h>
using namespace std;

int n;
vector<int>v;

int dp(int l, int r , int key, int ans)
{
    if(l>r) return ans;

    int mid= (l+r)/2;

    if(key >= v[mid])
    {
        ans= mid;
        return dp(mid+1, r, key, ans);
    }
    else
    {
        return dp(l, mid-1, key, ans);
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

    sort(v.begin(), v.end());

    int k; cin>>k;
    while(k--)
    {
        int x; cin>>x;

        int ans= dp(0, n-1, x, -1);

        cout<<ans+1<<endl;
    }

    

    return 0;
}