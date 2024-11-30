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
        vector<int>v(n),b(n);
        int XOR=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            XOR ^= v[i];
        }
        for(int i=0; i<n; i++)
        {
            b[i]=v[i] ^ XOR;
        }
        int check=0;
        for(int i=0; i<n; i++)
        {
            check ^= b[i];
        }
        if(check==0)
        {
            cout<<XOR<<endl;
        }
        else cout<<-1<<endl;
    }

    

    return 0;
}