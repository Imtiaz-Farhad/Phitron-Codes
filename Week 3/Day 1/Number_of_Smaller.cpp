#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int j=0; j<m; j++) cin>>b[j];

    int l=0, r=0, cnt=0;
    while(r<m)
    {
        if(a[l]<b[r] && l!=n)
        {
            l++;
            cnt++;
        }
        else 
        {
            r++;
            cout<<cnt<<" ";
        }
    }

    return 0;
}