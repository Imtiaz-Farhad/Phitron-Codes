#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<string> a(n),b(n),c(n);
        map<string, int> freq;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            freq[a[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            freq[b[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            cin>>c[i];
            freq[c[i]]++;
        }
        int al=0, bl=0, cl=0;

        for(string p: a)
        {
            if(freq[p]==1) al+=3;
            else if(freq[p]==2) al++;
        }
        for(string p: b)
        {
            if(freq[p]==1) bl+=3;
            else if(freq[p]==2) bl++;
        }
        for(string p: c)
        {
            if(freq[p]==1) cl+=3;
            else if(freq[p]==2) cl++;
        }
        cout<<al<<" "<<bl<<" "<<cl<<endl;
    }
    

    return 0;
}