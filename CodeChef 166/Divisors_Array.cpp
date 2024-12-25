#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mod= 1e9+7;

ll fact(int m)
{
    ll f=1;
    for(int i=1; i<=m; i++)
    {
        f= (f*i) % mod;
    }
    return f;
}


long long divisors(long long x) {
    map<long long, int> primeCount;
    long long original = x;

    for (long long i = 2; i * i <= x; i++) {
        while (x % i == 0) {
            primeCount[i]++;
            x /= i;
        }
    }
    if (x > 1) primeCount[x]++;

    long long count = 1;
    for (auto &p : primeCount) {
        count = (count * (p.second + 1)) % mod;
    }

    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll m; 
    cin>>n>>m;

    m=fact(m);

    vector<ll>a(n), b(n);

    for(int i=0; i<n; i++) cin>>a[i];

    for (int i = 0; i < n; ++i) {
        long long B_i = (a[i] * m) % mod;
        b[i] = divisors(B_i);
    }

    for(int x: b) cout<<x<<" ";



    return 0;
}