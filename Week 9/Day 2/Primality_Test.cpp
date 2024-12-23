#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)  //Primality test
{
    if(n==1) return false;

    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    
    if(isprime(n)) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}