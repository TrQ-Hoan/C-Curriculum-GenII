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
    long addr = 1, i = 0, j = 0, k = 0;
    long * F = nullptr, a[n+5][m+5] = {{0}};
    F = (long * ) malloc(MAX * sizeof(F));
    F[0] = 0;
    F[1] = 1;
    while (addr <= n * m) {
        for (; j < m - k; ++j) {
            if (addr > 1) F[addr] = (F[addr - 1] % MOD + F[addr - 2]) % MOD;
            a[i][j] = F[addr++];
        }
        i++; j--;
        for (; i < n - k; ++i) {
            F[addr] = (F[addr - 1] % MOD + F[addr - 2]) % MOD;
            a[i][j] = F[addr++];
        }
        i--; j--;
        for (; j >= k; --j) {
            F[addr] = (F[addr - 1] % MOD + F[addr - 2]) % MOD;
            a[i][j] = F[addr++];
        }
        i--; j++;
        for (; i > k; --i) {
            F[addr] = (F[addr - 1] % MOD + F[addr - 2]) % MOD;
            a[i][j] = F[addr++];
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
