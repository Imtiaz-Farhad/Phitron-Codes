#include<bits/stdc++.h>
using namespace std;

int check_kth_bit_on_or_off(int n, int k)
{
    return ((n>>k)&1);
}

void print_on_and_off_bits(int n)
{
    for(int k=30; k>=0; k--)
    {
        cout<<check_kth_bit_on_or_off(n,k)<<" ";
    }
}

int turn_on_kth_bit(int n, int k)
{
    return (n | (1<<k));
}

int turn_off_kth_bit(int n, int k)
{
    return n &(~(1<<k));
}

int toggle_kth_value(int n, int k)
{
    return n^(1<<k);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n=21;
    // cout<<check_kth_bit_on_or_off(15, 2)<<endl;
    // print_on_and_off_bits(n);
    // cout<<turn_on_kth_bit(n, 4);
    // cout<<turn_off_kth_bit(n,3)<<endl;
    cout<<toggle_kth_value(n, 3);

    return 0;
}