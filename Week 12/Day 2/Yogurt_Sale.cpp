#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n, regular, offer;
        cin>>n>>regular>>offer;

        int regular_price=0, offer_price=0;

        regular_price= n*regular;

        offer_price= offer* (n/2);
        offer_price+= regular* (n%2);

        cout<<min(regular_price, offer_price)<<endl;
    }

    return 0;
}