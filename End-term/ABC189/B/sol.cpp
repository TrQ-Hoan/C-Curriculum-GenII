#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    //freopen("task.in", "r", stdin);
    //freopen("task.out", "w", stdout);
    int n, x, s = 0, ans = -1;
    cin >> n >> x;
    x *= 100;
    bool drunk = false;
    for (int i = 0; i < n; ++i) {
        int a,b;
        cin >> a >> b;
        s += a*b;
        drunk = s > x;
        if (drunk) {
            ans = i+1;
            break;
        }
    }
    cout << ans << "\n";
}

