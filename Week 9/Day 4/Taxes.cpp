#include<bits/stdc++.h>
using namespace std;

bool isprime(int x)
{
    if(x==1) return false;

    for(int i=1; i*i <= x; i++)
    {
        if(x%i==0) return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    
    if(isprime(n)) cout<<1<<endl;
    else if(n%2==0) cout<<2<<endl;
    else 
    {
        if(isprime(n-2)) cout<<2<<endl;
        else cout<<3<<endl;
    }
    

    return 0;
}