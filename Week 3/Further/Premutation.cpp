#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--)
    {
        int n; cin>>n;
    
        int arr[n][n-1];

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                cin>>arr[i][j];
            }
        }
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            mp[arr[i][0]]++;
        }
        // for(auto [x,y]:mp) cout<<x<<" "<<y<<endl;
        int p,q;
        for(auto [x,y]:mp)
        {
            // cout<<x<<" "<<y<<endl;
            if(y==1) p=x;
            else  q=x;
        }
        vector<int>ans;
        ans.push_back(q);
        for(int i=0; i<n; i++)
        {
            if(arr[i][0]==p)
            {
                p=i;
                break;
            }
        }
        // cout<<p<<endl;

        for(int i=0; i<n-1;i++)
        {
            // cout<<arr[p][i]<<" ";
            ans.push_back(arr[p][i]);
        }
        for(int x:ans) cout<<x<<" ";
        cout<<endl;
    }

    return 0;
}