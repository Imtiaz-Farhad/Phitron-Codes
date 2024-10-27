#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a<=b)
    {
        int sum= b-a+1;
        cout<<sum<<endl;
    }
    else cout<<"0";
    return 0;
}