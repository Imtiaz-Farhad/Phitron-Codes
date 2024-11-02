#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        stack <char> stk, ans;
        for(int i=0; i<s.size(); i++)
        {
            stk.push(s[i]);
        }
        int done=0;
        while(!(stk.empty()))
        {
            if(!(ans.empty()) && stk.top()==ans.top())
            {
                if(done!=0) continue;
                ans.push('#');
                done=1;
            }
            ans.push(stk.top());
            stk.pop();
        }
        if(done==0)
        {
            ans.push('#');
        }
        while(!(ans.empty()))
        {
            cout<<ans.top();
            ans.pop();
        }
        cout<<endl;
    }



    return 0;
}