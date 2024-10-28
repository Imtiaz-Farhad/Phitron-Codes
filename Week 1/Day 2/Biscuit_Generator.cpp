#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,t;
    cin>>a>>b>>t;
    int sum=0;
    int i=1;
    int k=a;
    while(a*i <= t)
    {
        i++;
        sum+=b;
    }
    cout<<sum<<endl;
    return 0;
}