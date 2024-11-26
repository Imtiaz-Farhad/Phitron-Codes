#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        vector<int>v(n,0);
        int x=n-k;
        int i=0;
        while (x)
        {
            v[i]=x;
            x--;
            i++;
        }
        x=n-k;
        while(x<n)
        {
            x++;
            v[i]=x;
            i++;
        }
        for(int x: v) cout<<x<<" ";
        cout<<endl;
    }
    

    return 0;
}