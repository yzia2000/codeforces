#include <bits/stdc++.h>

using namespace::std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string person;
    int n, m;
    cin >> person;
    cin >> n >> m;
    if (person == "Alice") {
        string result;
        string s, p; cin >> s >> p;
        for (int i  = 0; i < m; i++) {
            if (p[i] != '?') {
                result.push_back(p[i]);
            } else {
                result.push_back(s[i % n]);
            }
        }
        cout << result << '\n';
    } else {
        string result; cin >> result;
        cout << result.substr(n);
    }

    return 0;
}


