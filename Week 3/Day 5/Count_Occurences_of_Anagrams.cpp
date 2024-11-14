#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a,b;
    cin>>a>>b;

    int l=0, r=0;
    int n=a.size();
    int k=b.size();

    // while(r<n)
    // {
    //     if(r-l+1==k)
    //     {
    //         cout<<a.substr(l,r)<<endl;
    //         // cout<<l<<" "<<r<<endl;
    //         l++; r++;
    //     }
    //     else r++;
    // }

    cout<<a.substr(0,3)<<endl;
    cout<<a.substr(1,4)<<endl;
    cout<<a.substr(2,5)<<endl;
    cout<<a.substr(3,6)<<endl;
    cout<<a.substr(4,7)<<endl;

    return 0;
}