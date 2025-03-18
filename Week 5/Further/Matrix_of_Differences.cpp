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
        int lower=1, upper=n*n;

        vector<int>v;
        
        for(int i=0; i<n*n; i++)
        {
            if(i%2==0) 
            {
                v.push_back(lower);
                lower++;
            }
            else
            {
                v.push_back(upper);
                upper--;
            }
            
        }
        int arr[n][n];
        int k=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                arr[i][j]= v[k];
                k++;
            }
            // cout<<endl;
        }
        
        // for(int i=0; i<n; i++)
        // {
        //     for(int j=0; j<n; j++)
        //     {
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // for(int x:v) cout<<x<<" ";
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                for(int j=0; j<n; j++)
                {
                    cout<<arr[i][j]<<" ";
                }
            }
            else
            {
                for(int j=n-1; j>=0; j--)
                {
                    cout<<arr[i][j]<<" ";
                }
            }
            
            cout<<endl;
        }
    }

    return 0;
}