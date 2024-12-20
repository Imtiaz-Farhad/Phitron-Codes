#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int k=0;
    while(true)
    {
        bool flg=false;
        for(int i=0; i<n-1; i++)
        {
            if(v[i]<v[i+1])
            {
                v[i]=v[i+1];
                flg=true;
            }
        }
        
        if(flg) k++;
        else break;
    }

    cout<<k<<endl;

}
