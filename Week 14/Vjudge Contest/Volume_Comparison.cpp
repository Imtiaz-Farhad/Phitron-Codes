#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c,x;
    cin>>a>>b>>c>>x;

    if((a*b*c)> (pow(x,3))) cout<<"Cuboid"<<endl;
    else if((a*b*c)<(pow(x,3))) cout <<"Cube\n";
    else cout<<"Equal\n";

    return 0;
}