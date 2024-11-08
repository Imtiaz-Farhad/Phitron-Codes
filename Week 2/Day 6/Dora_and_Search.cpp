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
        while(i<j)
        {
            if( (v[i]==*s.begin() && v[j]==*s.rbegin()) || (v[i]==*s.rbegin() && v[j]==*s.begin()))
            {
                // cout<<"both"<<endl;
                s.erase(v[i]);
                s.erase(v[j]);
                i++;
                j--;
            }
            else if( (v[i]==*s.begin()) ||  (v[i]==*s.rbegin()))
            {
                s.erase(v[i]);
                i++;
            }
            else if( (v[j]==*s.begin()) ||  (v[j]==*s.rbegin()) )
            {
                s.erase(v[j]);
                j--;
            }
            else break;
        }
        i++; j++;
        if(i==j || i>j) cout<<-1<<endl;
        else cout<<i<<" "<<j<<endl;
    }

    

    return 0;
}