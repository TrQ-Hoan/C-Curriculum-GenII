#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdio>

int main() {
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    if (a!=b&&b==c) printf("1");
    else if (a!=b&&a==c) printf("2");
    else if (a!=c&&b==a) printf("3");
    else printf("0");
    return 0;
}