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
        long int ans=0;
        int final_value=0;
        for(int i=0; i<n; i++)
        {
            int x; cin>>x;
            if(x==0)
            {
                ans+=final_value;
                final_value=0;
            }
            else if(x>0)
            {
                if(x>final_value)
                {
                    final_value=x;
                }
            }
        }
        cout<<ans<<endl;
    }
    

    return 0;
}