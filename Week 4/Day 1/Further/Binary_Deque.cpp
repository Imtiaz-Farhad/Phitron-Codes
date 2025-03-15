#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        vector<int>v(n);
        int total=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            total+=v[i];
        }
        if(total < s) 
        {
            cout<<-1<<endl;
            continue;
        }
        // // cout<<total<<endl;

        int l=0, r=n-1;
        int ans=0;
        while(total > s)
        {
            if(total==s) break;
            if(v[l]==1)
            {
                ans++;
                
                total--;
                l++;
            }
            else if(v[r]==1)
            {
                total--;
                r--;
                ans++;
            }
            else
            {
                //left e koto dure 1
                int left = l;
                while (left <= r && v[left] != 1) left++;


                // Find the next 1 on the right
                int right = r;
                while (right >= l && v[right] != 1) right--;

                if (left > r && right < l)
                {
                    break;
                }

                if (left-l < r - right) 
                {
                    ans += left - l;
                    l = left;
                }
                else
                {
                    ans += r - right;
                    r = right;
                    
                }

            }
        }
        cout<<ans<<endl;
    }

    return 0;
}