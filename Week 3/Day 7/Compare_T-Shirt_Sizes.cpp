#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;

        int ans;
        char a_last= a[a.size()-1];
        char b_last= b[b.size()-1];
        if(a_last=='M' && b_last=='S')ans=1;
        if(a_last=='S' && b_last=='M')ans=-1;
        if(a_last=='L' && b_last=='M')ans=1;
        if(a_last=='M' && b_last=='L')ans=-1;
        if(a_last=='S' && b_last=='L')ans=-1;
        if(a_last=='L' && b_last=='S')ans=1;



        if(a_last==b_last)
        {
            if(a_last=='S')
            {
                int a_size=a.size();
                int b_size=b.size();
                if(a_size>b_size) ans=-1;
                else if(a_size<b_size) ans=1;
                else ans=0;
            }
            else if(a_last=='L')
            {
                int a_size=a.size();
                int b_size=b.size();
                if(a_size>b_size) ans=1;
                else if(a_size<b_size) ans=-1;
                else ans=0;
            }
            else ans=0;
        }

        if(ans==1) cout<<'>'<<endl;
        else if(ans==-1) cout<<'<'<<endl;
        else cout<<'='<<endl;
    }

    return 0;
}