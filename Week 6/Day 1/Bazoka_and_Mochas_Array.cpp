#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vector<int>v(n);

    for(int i=0; i<n; i++) cin>>v[i];

    int l=0, r=0;
    int a,b;
    while(r<n)
    {
        if(v[r]>=v[l])
        {
            r++;
        }
        else
        {
            a=r;
            r--;
            break;
        }
    }
    cout<<l<<r<<endl;
    cout<<a;

    return 0;
}