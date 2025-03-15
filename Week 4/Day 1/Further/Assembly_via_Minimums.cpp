#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll k=(n*(n-1))/2;
        vector<ll>v(k);
        for(ll i=0; i<k; i++) cin>>v[i];

        sort(v.begin(), v.end());

        vector<int> a(n);
        int idx = 0;


        for (int i = 0; i < n - 1; i++) {
            a[i] = v[idx];
            idx += (n - 1 - i);
        }

        a[n - 1] = v[k - 1];
        for (int x : a) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
