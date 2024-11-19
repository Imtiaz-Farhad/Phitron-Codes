#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int one,two;

        one= abs(a-1);
        two= abs(b-c)+abs(c-1);

        if(one<two) cout<<'1';
        else if(one> two) cout<<"2";
        else cout<<"3";
        cout<<endl;
    }

    return 0;
}