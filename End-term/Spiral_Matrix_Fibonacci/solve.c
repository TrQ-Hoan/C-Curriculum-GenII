#include <stdio.h>
#include <cstdlib>

#define ull unsigned long long int
#define ll long long int
#define MOD 1000000007
#define MAX 1000005
#define oo 1005

int main() {
    long n, m;
    scanf("%lld", & n);
    m = n;
    long addr = n*m, i = 0, j = 0, k = 0;
    long * F = nullptr, a[n+5][m+5] = {{0}};
    F = (long * ) malloc(MAX * sizeof(F));
    F[0] = 0;
    F[1] = 1;
    for (int i = 2; i <= n*m; ++i) {
        F[i] = (F[i - 1] % MOD + F[i - 2]) % MOD;
    }
    while (addr > 0) {
        for (; j < m - k; ++j) {
            a[i][j] = F[addr--];
        }
        i++; j--;
        for (; i < n - k; ++i) {
            a[i][j] = F[addr--];
        }
        i--; j--;
        for (; j >= k; --j) {
            a[i][j] = F[addr--];
        }
        i--; j++;
        for (; i > k; --i) {
            a[i][j] = F[addr--];
        }
        i++; j++;
        k++;
    }
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j)
            printf("%lld ", a[i][j]);
        printf("\n");
    }
    free(F);
    return 0;
}
