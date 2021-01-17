#include <stdio.h>

int main() {
    int n, i;
    scanf("%d\n", &n);
    long cnt = 0;
    char pc, c;
    for (i = 0; i < n; ++i){
        scanf("%c\n", &c);
        if (i > 0 && pc == c) cnt++;
        pc = c;
    }
    printf("%ld", cnt);
    return 0;
}
