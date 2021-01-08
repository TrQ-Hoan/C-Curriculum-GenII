#include <stdio.h>

int main() {
    int k;
    scanf("%d", & k);
    if (k == 1) {
        printf("1\n1");
        return 0;
    }
    int n = (k + 3) / 4 * 2;
    printf("%d\n", n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int color = (i + j) % n;
            if ((i & 1) && color + n < k) {
                color += n;
            }
            printf("%d ", color + 1);
        }
        printf("\n");
    }
    return 0;
}
