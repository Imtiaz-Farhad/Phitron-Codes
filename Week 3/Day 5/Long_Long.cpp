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
        long long int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        long long int sum=0, negatives=0;
        bool flg=false;
        for(int i=0; i<n; i++)
        {
            sum+=abs(a[i]);
            if (a[i] < 0)
            {
                if (!flg)
                {
                    negatives++;
                    flg = true;
                }
            }
            else if(a[i]==0)
            {
                //do noting
            }
            else
            {
                flg = false;
            }
        }
        cout<<sum<<" "<<negatives<< endl;
    }

    return 0;
}