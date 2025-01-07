#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n, left, right;
        cin>>n>>left>>right;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        sort(v.begin(), v.end());

        int result=0;

        for(int i=0; i<n-1; i++)
        {
            int left_pos=-1, right_pos=-1;
            int key= left- v[i];


            int l=i+1, r=n-1, ans=-1;

            while(l<=r)
            {
                int mid= (l+r)/2;

                if(key<=v[mid])
                {
                    r=mid-1;
                    ans=mid;
                }
                else l=mid+1;
            }
            // cout<<ans<<endl;
            left_pos= ans;


            key= right- v[i];
            l=i+1, r=n-1, ans=-1;

            while(l<=r)
            {
                int mid= (l+r)/2;

                if(key>=v[mid])
                {
                    l=mid+1;
                    ans=mid;
                }
                else r=mid-1;
            }

            right_pos=ans;

            // cout<<left_pos<<" "<<right_pos<<endl;
            if(left_pos != -1 && right_pos != -1)
            {
                result+= (right_pos-left_pos +1);
            }
        }
        cout<<result<<endl;
    }

    return 0;
}