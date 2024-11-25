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
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];

        char c='a';
        for(int i=0; i<n-1; i++)
        {
            if(a[i]==a[i+1])
            {
                cout<<c;
                c++;
            }
            else
            {
                cout<<c;
                c='a';
            }
        }
        if(a[n-1]==a[n-2]) cout<<c;
        else cout<<'a';

        cout<<endl;
    }

    return 0;
}