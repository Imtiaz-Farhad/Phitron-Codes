#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string a,b,c;
        cin>>a>>b>>c;

        bool flg= false;

        for(int i=0; i<n; i++)
        {
            if(a[i] != c[i] && b[i]!=c[i]) 
            {
                // cout<<i<<endl;
                flg=true;
                break;
            }
        }
        flg? cout<<"YES\n": cout<<"NO\n";
    }

    return 0;
}