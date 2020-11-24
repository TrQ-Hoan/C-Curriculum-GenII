#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdio>

int main() {
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d", (a==b && a==c)? 1 : 0);
    return 0;
}