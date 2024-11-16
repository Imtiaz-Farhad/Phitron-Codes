#include<bits/stdc++.h>
using namespace std;
int n,m;

bool valid(int i, int j)
{
    if(i<0 || j<0 || i>=n || j>=m) return false;
    else return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        int i=2, j=2;
        int mx=INT_MIN;
        
        for(int p=0; p<n; p++)
        {
            for(int k=0; k<m; k++)
            {
                int sum=0;
                sum+=a[p][k];
                int i=p-1, j=k-1;
                while(valid(i,j))
                {
                    // cout<<a[i][j]<<endl;
                    sum+=a[i][j];
                    i--; j--;
                }
                i=p+1, j=k+1;
                while(valid(i,j))
                {
                    // cout<<a[i][j]<<endl;
                    sum+=a[i][j];
                    i++; j++;
                }
                i=p-1, j=k+1;
                while(valid(i,j))
                {
                    // cout<<a[i][j]<<endl;
                    sum+=a[i][j];
                    i--; j++;
                }
                i=p+1, j=k-1;
                while(valid(i,j))
                {
                    // cout<<a[i][j]<<endl;
                    sum+=a[i][j];
                    i++; j--;
                }
                mx=max(mx,sum);
            }
        }
        cout<<mx<<endl;
    }
    
    

    return 0;
}