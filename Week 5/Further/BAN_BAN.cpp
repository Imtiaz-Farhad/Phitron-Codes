#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int first=1, last=3*n;
        if(n%2) n++;
        cout<<n/2<<endl;

        
        for(int i=1; i<=n/2; i++)
        {
            cout<<first<<" "<<last<<endl;
            first+=3; last-=3;
        }
    }

    return 0;
}