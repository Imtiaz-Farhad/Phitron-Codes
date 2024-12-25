#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n=1000;

        int a,b,c;
        cin>>a>>b>>c;

        int sq= 2*(a*b + b*c + c*a);
        // cout<<sq;

        cout<<n/sq<<endl;
    }

    return 0;
}