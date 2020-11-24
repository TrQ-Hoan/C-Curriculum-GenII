#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    char* represent[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int i = a; i <= b; i++)
        if(i > 9) printf("%s", i&1 ? "odd\n":"even\n");
        else printf("%s\n", represent[i]);
    return 0;
}

