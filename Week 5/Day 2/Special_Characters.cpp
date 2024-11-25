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
        if(n%2) cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            char c='A';
            while(n!=0)
            {
                cout<<c<<c;
                c++;
                n-=2;
            }
            cout<<endl;
        }
    }

    return 0;
}