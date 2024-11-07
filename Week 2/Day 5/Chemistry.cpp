#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin>>n>>k;
    map<char, int>mp;
    char ch[n];
    for(int i=0; i<n; i++)
    {
        cin>>ch[i];
        mp[ch[i]]++;
    }
    for(auto [x,y]:mp)
    {
        cout<<x<<" "<<y<<endl;
    }

    


    return 0;
}