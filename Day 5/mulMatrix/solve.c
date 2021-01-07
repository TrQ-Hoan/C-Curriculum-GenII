#include <stdio.h>

int main () {
    long n, m, i, j, k;
    scanf("%ld%ld", &n, &m);
    long a[n][m], b[m][n], mul[100][100] = {};
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            scanf("%ld", &a[i][j]);
        }
    }
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            scanf("%ld", &b[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < m; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%ld ", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
