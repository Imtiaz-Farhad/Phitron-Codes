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
        int arr[n];
        vector<int>ans;

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n; i++)
        {
            int add=0;
            int k; cin>>k;
            while(k--)
            {
                char ch; cin>>ch;
                if(ch=='D') add++;
                else if(ch=='U') add--;
            }
            add+=arr[i];
            // cout<<add<<endl;
            if(add>9) ans.push_back (add-10);
            else if(add<0) ans.push_back( 10+add);
            else ans.push_back(add);
        }
        for(int x: ans) cout<<x<<" ";
        cout<<endl;
        }


    return 0;
}