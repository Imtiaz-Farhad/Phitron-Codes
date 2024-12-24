#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin>>s1>>s2;

    int destination=0;
    int init=0;
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]=='+') destination++;
        else destination--;
    }
    int comb=0;
    for(int i=0; i<s2.size(); i++)
    {
        if(s2[i]=='+') init++;
        else if(s2[i]=='-') init--;
        else comb++;
    }
    double ans=0;
    for(int i=0; i<(1LL<<comb); i++)
    {
        int temp=0;
        for(int k=comb-1; k>=0; k--)
        {
            if((i>>k)&1) temp++;
            else temp--;
        }
        if((init+temp)==destination) ans++;
    }

    // if(comb==0) cout<<"1.000000000000";
    // else
    // {
        cout << fixed << setprecision(12);
        cout<<(ans/(1LL<<comb));
    // }

    return 0;
}