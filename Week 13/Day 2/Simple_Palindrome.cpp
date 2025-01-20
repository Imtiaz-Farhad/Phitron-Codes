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
        vector<char>ch{'a', 'e', 'i', 'o', 'u' };

        int total= n/5;
        int rest= n%5;

        // cout<<total<<" "<<rest;

        int l=0;
        for(int i=1; i<=rest; i++)
        {
            for(int j=1; j<= total+1; j++) cout<<ch[l];
            l++;
        }
        for(int i=1; i<=5-rest; i++)
        {
            for(int j=1; j<= total; j++) cout<<ch[l];
            l++;
        }
        cout<<endl;
    }

    return 0;
}