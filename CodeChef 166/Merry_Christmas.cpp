#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    int ans=0;
    if(n>=4) 
    {
        ans++;
        n-=4;
    }
    if(n>=2)
    {
        ans++;
        n-=2;
    }
    if(n>=1)
    {
        ans++;
        n-=1;
    }
    cout<<ans<<endl;

    return 0;
}