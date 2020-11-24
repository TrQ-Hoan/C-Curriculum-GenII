#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdio>

int main() {
    long long n;
    scanf("%lld", &n);
    long long sum = 0;
    do {
        sum += (n % 10);
        n /= 10;
    }
    while(n != 0);
    printf("%lld", sum);
    return 0;
}