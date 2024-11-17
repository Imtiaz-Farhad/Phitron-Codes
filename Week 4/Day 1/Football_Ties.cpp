#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;

        x=x%3; y%=3;
        cout<<min(x,y)<<endl;
    }

    return 0;
}