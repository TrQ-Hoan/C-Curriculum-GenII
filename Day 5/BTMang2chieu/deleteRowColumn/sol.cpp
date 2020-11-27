#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, r, c;
    cin >> n >> m >> r >> c; --r; --c;
    vector<vector<int>> mat(n, vector<int>(m));
    for (auto& row: mat)
        for (auto &i: row) cin >> i;
    for (int i = 0; i < n; ++i) {
        if (i == r) continue;
        for (int j = 0; j < m; ++j) {
            if (j == c) continue;
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}

