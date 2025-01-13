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
        string s;
        cin>>s;
        int empty_cells=0;
        int consiquetive=0, c=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='.') empty_cells++;

            if(s[i]=='#')
            {
                consiquetive= max(c, consiquetive);
                c=0;
            }
            else c++;
        }
        if(consiquetive >= 3 || c>=3) cout<<"2\n";
        else cout<<empty_cells<<endl;
    }

    return 0;
}