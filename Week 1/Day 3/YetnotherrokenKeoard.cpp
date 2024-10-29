#include<bits/stdc++.h>
using namespace std;

bool cmd(pair<char, int>a, pair<char,int>b)
{
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        stack<pair<char,int>> cap, sma;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='b')
            {
                if(!sma.empty()) sma.pop();
            }
            else if(s[i]>='a' && s[i]<='z') sma.push({s[i],i});

            if(s[i]=='B')
            {
                if(!cap.empty()) cap.pop();
            }
            else if(s[i]>='A' && s[i]<='Z') cap.push({s[i],i});
        }
        vector<pair<char,int>>ans;
        while(!sma.empty())
        {
            ans.push_back({sma.top().first,sma.top().second});
            sma.pop();
        }
        while(!cap.empty())
        {
            ans.push_back({cap.top().first,cap.top().second});
            cap.pop();
        }
        sort(ans.begin(), ans.end(), cmd);
        for(auto[x,y]:ans)
        {
            cout<<x;
        }
        cout<<endl;
    }
    
    


    return 0;
}