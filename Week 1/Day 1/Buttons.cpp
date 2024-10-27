#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a, b;
    cin>>a>>b;
    int sum;
    sum= max(a,b);
    if(a>b) a--;
    else b--;
    sum+= max(a,b);
    cout<<sum<<endl;

    return 0;
}