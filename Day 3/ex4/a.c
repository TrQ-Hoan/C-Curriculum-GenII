#include <stdio.h>

void printPascal(int n) { 
    for (int line = 1; line <= n; line++) {
        for(int j = line; j < n; ++j)
            printf(" ");
        long long C = 1;
        for (int i = 1; i <= line; i++) {
            printf("%lld ", C);
            C = C * (line - i) / i;  
        }
        printf("\n");
    } 
} 
int main() { 
    int n;
    scanf("%d", &n);
    printPascal(n); 
    return 0;
} 