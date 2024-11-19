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
        string s; cin>>s;

        int zero=0, one=0;
        if(s[0]=='0') zero++;
        else one++;

        for(int i=1; i<n; i++)
        {
            if(s[i]!= s[i-1])
            {
                if(s[i]=='0') zero++;
                else one++;
            }
        }
        cout<<min(zero,one)<<endl;
    }


    return 0;
}