#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int MOD = 1e9 + 7;

int power(int a, int b)
{
    int ans=1%MOD;

    while(b)
    {

        if(b & 1)
        {
            ans = (1LL * ans % MOD * a % MOD) % MOD;
        }

        a= 1LL * a * a % MOD;
        b/=2;
    }
    
    
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;

        cout<<power(a,b)<<endl;
    }

    return 0;
}