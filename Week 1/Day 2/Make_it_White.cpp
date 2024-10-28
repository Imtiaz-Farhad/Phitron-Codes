#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char a[n];
        int b=-1, w=-1;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]=='B' && b == -1)
            {
                b=i; w=i;
            }
            else if(a[i]=='B' && b != -1) w=i;
        }
        int ans= w-b+1;
        cout<<ans<<endl;
    }
    return 0;
}