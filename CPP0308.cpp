#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int main() {
    fastsync();
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        multiset<char> se;
        for (int i = 0; i < s.length(); i++) {
            se.insert(s[i]);
        }
        for (int i = 0; i < s.length(); i++) {
            if (se.count(s[i]) == 1)
                cout << s[i];
        }
        cout << endl;
    }
    return 0;
}