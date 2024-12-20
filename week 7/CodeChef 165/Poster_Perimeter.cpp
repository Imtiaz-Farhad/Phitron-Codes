#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
    while(t--)
    {
        int l,w,k;
        cin>>l>>w>>k;
        int ans= INT_MAX;
        for(int i=1; i<=l; i++)
        {
            for(int j=1; j<=w; j++)
            {
                int p= abs(2*(i+j)-k);
                ans= min(ans, p);
            }
        }
        cout<<ans<<endl;
    }
}