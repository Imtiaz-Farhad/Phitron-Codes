#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y,z;
    cin>>x>>y>>z;

    int rem=4-(x+y+z);
    int a= x+y*0.5;
    int b= y*0.5+z;
    if(rem>0)
    {
        a+=rem;
    }
    if(a>b) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}