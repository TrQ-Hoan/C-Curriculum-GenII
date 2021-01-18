#include <stdio.h>

int main() {
    long n;
    int k;
    scanf("%ld%d", &n, &k);
    while (k--) {
        if (n%10)
            n--;
        else
            n /= 10;
    }
    printf("%ld\n", n);
    return 0;
}
