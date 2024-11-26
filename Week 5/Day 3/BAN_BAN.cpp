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
        if(n==1)
        {
            cout<<1<<endl;
            cout<<1<<" "<<3<<endl;
            continue;
        }
        cout<<n-1<<endl;
    
        for(int i=1; i<3*n; i++)
        {
            if(i%3==0) 
            {
                // step++;
                cout<<i<<" "<<i+1 <<endl;
            }
        }
        // cout<<step<<endl;
        
    }
    

    return 0;
}