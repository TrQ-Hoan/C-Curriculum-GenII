#include <bits/stdc++.h>
using namespace std;
#define ll long long //lli
#define ull unsigned long long //llu
#define uint unsigned int //%u
#define MIN -1e6
#define MAX 1e6
#define sync(off) ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main(){
    sync(off);
    char isp[] = "ISPISPISPISPISPISPISPISPISPISPISPISPISPISPISPISPISPISPISPISPISPISP";
    int n; cin >> n;
    for (int i = 0; i < n;++i) {
        for (int j = i+1; j < n; ++j)
            cout << " ";
        for (int j = 0; j <= i; ++j)
            cout << isp[j];
        for (int j = 0; j < i; ++j)
            cout << isp[i-j-1];
        cout << '\n';
    }
    for (int i = n-2; i >= 0;--i) {
        for (int j = i+1; j < n; ++j)
            cout << " ";
        for (int j = 0; j <= i; ++j)
            cout << isp[j];
        for (int j = 0; j < i; ++j)
            cout << isp[i-j-1];
        cout << '\n';
    }
    return 0;
}