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
        vector<int>a,b;
        for(int i=1; i<=n; i++)
        {
            char ch; cin>>ch;
            if(ch=='R') a.push_back(1);
            else a.push_back(0);
        }
        for(int i=1; i<=n; i++)
        {
            char ch; cin>>ch;
            if(ch=='G' || ch=='B') b.push_back(0);
            else b.push_back(1);
        }
        if(a.size()!= b.size()) cout<<"NO\n";
        else
        {
            bool flg=true;
            for(int i=0; i<a.size(); i++)
            {
                if(a[i] != b[i]) 
                {
                    flg=false;
                    break;
                }
            }
            flg? cout<<"YES\n": cout<<"NO\n";
        }
    }

    return 0;
}