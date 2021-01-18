#include <stdio.h>
#include <string.h>

int main(int T) {
	scanf("%d", &T);
	while(T--) {
		char s[1005];
		scanf("%s", &s);
		long sum = 0, num = 0;
		for (int i = 0; i < strlen(s); ++i){
			if ('0' <= s[i] && s[i] <= '9') {
				num = num * 10 + s[i] - '0';
			} else {
				sum += num;
				num = 0;
			}
		}// 1L0v315P3000
		printf("%ld\n", sum + num);
    }
    return 0;
}