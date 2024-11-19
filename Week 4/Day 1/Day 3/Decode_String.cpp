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
        int a[n];

        for(int i=0; i<n; i++)
        {
            int x=int(s[i])-48;
            a[i]=x;
        }
        int i=n-1;
        vector<char>ch;
        while(i!=-1)
        {
            if(a[i]==0)
            {
                i--;
                int k=a[i-1]*10+a[i];
                ch.push_back(char(k+96));
                i-=2;
            }
            else
            {
                ch.push_back(char(a[i]+96));
                i--;
            }
            
        }
        reverse(ch.begin(), ch.end());
        for(char x: ch) cout<<x;
        cout<<endl;
    }

    return 0;
}