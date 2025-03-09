#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll  primary=0;
        string st;
        cin>>st;
        for(int i=0; i<n; i++)
        {
            if(st[i]=='L')
            {
                // cout<<i<<endl;
                primary+=i;
            }
            else if(st[i]=='R')
            {
                // cout<<n-(i+1)<<endl;
                primary+= (n-(i+1));
            }
        }
        // cout<<primary<<endl;

        vector<ll>ans(n,primary);

        // for(int x:ans)cout<<x<<endl; 
        

        ll l=0, r=n-1;
        ll cnt=0;
        for(int i=0; i<n; i++)
        {
            if(i%2)
            {
                //left side
                if(st[l]=='L')
                {
                    // cout<<"R"<<endl;
                    primary+= (n-(l+1));
                    primary-=l;
                    ans[cnt]=primary;
                    cnt++;
                }
                l++;
            }
            else
            {
                //right side
                if(st[r]=='R')
                {
                    // cout<<"L"<<endl;
                    primary+=(r);
                    primary-= (n-(r+1));
                    ans[cnt]=primary;
                    cnt++;
                }
                r--;
            }
        }
        // cout<<cnt<<endl;
        for(ll i=cnt; i<n; i++) ans[i]=primary;
        for(ll x:ans) cout<<x<<" ";
        cout<<endl;
    }

    return 0;
}