#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t; 
    while(t--)
    {
        long long int a,b,n,s;
        cin>>a>>b>>n>>s;

        long long int x= s%n;

        if(x<=b && a*n+b>=s) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}