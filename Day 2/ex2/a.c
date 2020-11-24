#include <stdio.h>

int main() {
static const char *strings[] = {"one","two","three","four","five", "six","seven","eight","nine"};
    int n = 0;
    scanf("%d",&n);
    // if (scanf("%d",&n) < 1) return 1;
    printf("%s",(n >= 1 && n <= 9) ? strings[n-1] : "Greater than 9");
    
    return 0;
}