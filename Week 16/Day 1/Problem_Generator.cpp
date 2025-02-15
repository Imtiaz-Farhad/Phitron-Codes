#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;
        
        map<char, int> freq;
        for (char c : a) {
            freq[c]++;
        }
        
        int missing = 0;
        for (char c = 'A'; c <= 'G'; ++c) {
            if (freq[c] < m) {
                missing += (m - freq[c]);
            }
        }
        
        cout << missing << "\n";
    }

    return 0;
}