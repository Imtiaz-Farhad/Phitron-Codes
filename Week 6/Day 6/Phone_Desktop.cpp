#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        double x,y;
        cin>>x>>y;

        int screens=0;
        screens= ceil(y/2);
        int remains= 15*screens - 4*y;

        x-=remains;

        if(x>0) screens+=ceil(x/15);

        cout<<screens<<endl;
    }

    return 0;
}