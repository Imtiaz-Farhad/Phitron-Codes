#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s,t;
    cin>>s>>t;
    int ans=0;

    for(int i=0; i<=100; i++)
    {
        for(int j=0; j<=100; j++)
        {
            for(int k=0; k<=100; k++)
            {
                if((i+j+k)<=s && (i*j*k)<=t) ans++;
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}