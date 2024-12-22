#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    int ans=0;

    int digit=0;
    for(int i=n;  i!=0; i/=10) digit++;

    vector<int>mp;
    
    for(int np=1; np<=digit; np++)
    {
        for(int i=0; i<(1<<np); i++)
        {
            string s;
            for(int k=np-1; k>=0; k--)
            {
                if((i>>k)&1) s.push_back('7');
                else s.push_back('4');
            }
            int num = stoi(s);
            if(num>n) break;

            mp.push_back(i);
        }
    }

    cout<<mp.size();
    
    return 0;
}