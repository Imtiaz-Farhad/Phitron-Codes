#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vector<int>v(n);

    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());

    int k; cin>>k;
    while(k--)
    {
        int start,end;
        cin>>start>>end;

        //left side
        int l=0, r=n-1, left_ans=-1, mid;

        while(l<=r)
        {
            mid= (l+r)/2;

            if(start <= v[mid])
            {
                left_ans= mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        // cout<<left_ans<<endl;

        //right side
        l=0, r=n-1;
        int right_ans=n;

        while(l<=r)
        {
            mid= (l+r)/2;

            if(end >= v[mid])
            {
                right_ans= mid;
                l=mid+1;
            }
            else r= mid-1;
        }

        if(right_ans==n) right_ans=-1;

        // cout<<right_ans<<endl;

        if(start>v[n-1]) cout<<0<< " ";

        else cout<<right_ans-left_ans+1<<" ";

    }


    return 0;
}