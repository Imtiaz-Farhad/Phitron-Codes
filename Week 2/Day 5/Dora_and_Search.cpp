#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>v(n);
        set<int>s;
        for(int i=0; i<n; i++)
        {
            int x; cin>>x;
            v[i]=x;
            s.insert(x);
        }
        int i=0, j=n-1;
        // for(auto x: s) cout<<x<<endl;
        while(i<j)
        {
            if(v[i] != *s.begin() && v[j] != *s.rbegin())
            {
                // cout<<"not same"<<v[i]<<*s.begin()<<" "<<v[j]<<*s.end()<<endl;
                break;
            }
            if(v[i]== *s.begin() && v[j] != *s.rbegin())
            {
                // cout<<"first same"<<v[i]<<*s.begin()<<" "<<v[j]<<*s.end()<<endl;
                s.erase(*s.begin());
                i++;
                
            }
            else if(v[i]!= *s.begin() && v[j] == *s.rend())
            {
                // cout<<"last same"<<v[i]<<*s.begin()<<" "<<v[j]<<*s.end()<<endl;
                s.erase(*s.rend());
                j--;
            }
            else
            {
                // cout<<"both same"<<v[i]<<*s.begin()<<" "<<v[j]<<*s.end()<<endl;
                s.erase(*s.begin());
                s.erase(*s.rbegin());
                i++;
                j--;
            }
        }
        cout<<i<<" "<<j<<endl;
    }
    

    return 0;
}