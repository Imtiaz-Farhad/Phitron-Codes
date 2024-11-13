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
        char s[n];
        int b_count=0;
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
            if(s[i]=='B') b_count++;
        }
        vector<int>ans;
        int temp=0;
        

        int l=0, r=0;

        while(r<n)
        {
            if(s[r]=='B') temp++;
            if(r-l+1==k)
            {
                // cout<<temp<<endl;
                ans.push_back(temp); 
                if(s[l]=='B') temp--;

                l++; r++;
            }
            else r++;
        }
        sort(ans.begin(), ans.end(), greater<int>());
        int p=0;
        int steps=0;
        // for(int x: ans) cout<<x<<endl;
        while(p<ans.size())
        {
            if(b_count>=ans[p] && ans[p] != 0)
            {
                // cout<<ans[p]<<endl;
                steps++;
                b_count-=ans[p];
            }
            else
            {
                if(b_count)
                {
                    steps++;
                }
                break;
            }
            p++;
        }
        cout<<steps<<endl;
    }

    return 0;
}