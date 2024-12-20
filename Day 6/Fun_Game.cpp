#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        string s,t;
        cin>>s>>t;

        if(s==t || s[0]=='1')
        {
            cout<<"YES"<<endl;
            continue;;
        }

        int pos=-1;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                pos=i;
                break;
            }
        }

        if(pos != -1)
        {
            bool flg= true;
            for(int i=0; i<n; i++)
            {
                if(s[i] != t[i])
                {
                    if(pos>i)
                    {
                        flg=false;
                        break;
                    }
                }
            }
            if(flg)
            {
                cout<<"YES\n";
            }
            else cout<<"NO\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }


    return 0;
}