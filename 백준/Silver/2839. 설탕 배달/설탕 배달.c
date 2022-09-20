#include <stdio.h>

int main() {

	int N;
	int count_3 = 0;
	int count_5 = 0;

	scanf("%d", &N);
	
    while (N % 5 != 0) {
		N = N - 3;
		count_3++;

		if (N < 3 && N != 0) {
			printf("-1");
			return 0;
		}
	}
    
    
	count_5 = N / 5;
	printf("%d",count_5 + count_3);
	return 0;
}