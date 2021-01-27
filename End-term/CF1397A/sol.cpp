#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    //freopen("task.in", "r", stdin);
    //freopen("task.out", "w", stdout);
    int t = 1;
    while (t--) {
        int n;
        cin >> n;
        map<char, int> mp;
        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            for (auto&c : s) ++mp[c];
        }
        bool flag = true;
        for (auto& pr: mp) {
            if (pr.second % n != 0) {
                cout << "NO\n";
                flag = false;
                break;
            }
        }
        if (flag) cout << "YES\n";
    }
    return 0;
}

