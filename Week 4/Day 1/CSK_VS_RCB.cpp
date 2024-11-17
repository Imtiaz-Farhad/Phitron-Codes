#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int csk, rcb; 
    cin>>rcb>>csk;

    if((rcb-csk)>=18) cout<<"RCB\n";
    else cout<<"CSK\n";

    return 0;
}