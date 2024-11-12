#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    int a[n];
    for(int i=0;i<n; i++) cin>>a[i];
    int k; cin>>k;
    queue<int>temp;
    vector<int>ans;
    int l=0, r=0;
    while(l<n)
    {
        if(a[r]<0)
        {
            temp.push(a[r]);
        }
        if(r-l+1==k)
        {
            if(!temp.empty())
            {
                ans.push_back(temp.front());
                if(a[l]==temp.front())
                {
                    temp.pop();
                }
            }
            else ans.push_back(0);
            l++; r++;
        }
        else
        {
            r++;
        }
    }
    for(auto x: ans) cout<<x<<" ";

    return 0;
}