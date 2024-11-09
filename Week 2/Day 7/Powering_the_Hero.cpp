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
        long long int ans=0;
        priority_queue<int>pq;
        for(int i=0; i<n; i++)
        {
            int x; cin>>x;
            if(x==0)
            {
                if(!pq.empty())
                {
                    ans+=pq.top();
                    pq.pop();
                }
            }
            else if(x>0)
                pq.push(x);
        }
        cout<<ans<<endl;
    }
    

    return 0;
}