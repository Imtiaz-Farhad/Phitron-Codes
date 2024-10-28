#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++) 
    {
        cin>>a[i];
    }
    int sareja=0, dima=0;
    int i=0, j=n-1,k=0;
    while(i<=j)
    {
        if(k%2==0)
        {
            if(a[i]>a[j])
            {
                sareja+=a[i];
                i++;
            }
            else
            {
                sareja+=a[j];
                j--;
            }
        }
        else
        {
            if(a[i]>a[j])
            {
                dima+=a[i];
                i++;
            }
            else
            {
                dima+=a[j];
                j--;
            }
        }
        k++;
    }
    cout<<sareja<<" "<<dima<<endl;

    return 0;
}