#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, row1, row2;
    cin >> n >> m >> row1 >> row2;
    --row1;
    --row2;
    int mat[1000][1000];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> mat[i][j];
    for (int i = 0; i < n; ++i) {
        int tmp = mat[i][row1];
        mat[i][row1] = mat[i][row2];
        mat[i][row2] = tmp;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            cout << mat[i][j] << " ";
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}
