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
        int i=0, j=s.size()-1;
        while(n>0)
        {
            if(s[i] != s[j])
            {
                n-=2;
                i++;
                j--;
            }
            else break;;
        }
        cout<<n<<endl;

    }

    
    return 0;
}