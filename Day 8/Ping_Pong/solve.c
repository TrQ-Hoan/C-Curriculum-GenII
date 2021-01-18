#include <stdio.h>

int main(int T) {
    scanf("%d", &T);
    while (T--) {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d %d\n", a-1, b);
    }
    return 0;
}
