#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int a,b,n,s;
        cin>>a>>b>>n>>s;

        bool ans=false;

        for(int i=0; i<=b; i++)
        {
            if((s-i)%n==0)
            {
                int x=(s-i)/n;
                if(x>=0 && x<=a) 
                {
                    ans=true;
                    break;
                }
            }
            
        }
        ans? cout<<"YES\n": cout<<"NO\n";
    }

    return 0;
}