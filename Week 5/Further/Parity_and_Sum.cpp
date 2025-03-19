#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vector<int>v(n);
    int even=0, odd=0;
    int max_even=0, max_odd=0;
    vector<int>evens;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]%2)
        {
            odd++;
            max_odd= max(max_odd, v[i]);
        }
        else
        {
            even++;
            max_even= max(max_even, v[i]);
            evens.push_back(v[i]);
        }
    }
    // cout<<even<<" "<<odd<<endl;
    if(even==0 || odd==0) cout<<"0"<<endl;
    else
    {
        int k=max_odd;
        bool flg=false;
        sort(evens.begin(), evens.end());
        for(int i=0; i<evens.size(); i++)
        {
            // cout<<evens[i]<<endl;
            // cout<<k<<endl;
            if(evens[i] > k) flg=true;
            k+=evens[i];
        }
        // for(int x:evens) cout<<x<<endl;

        if(flg) cout<<even+1<<endl;
        else cout<<even<<endl;
    }

    return 0;
}