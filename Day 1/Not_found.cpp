#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int fr[26]={0};
    for(int i=0; i<s.size(); i++)
    {
        fr[s[i]-97]++;
    }
    string  ans= "None";
    for(int i=0; i<26; i++)
    {
        if(!fr[i])
        {
            ans=char(i+97);
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}