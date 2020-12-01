#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j)
      cout << ((j == 0 || i == 0 || i == n - 1 || j == n - 1) ? "*" : " ");
    cout << "\n";
  }
}
