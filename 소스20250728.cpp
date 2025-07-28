#include <stdio.h>

int main() {
	int num;
	int i = 0;
	int square = 1;
	scanf("%d", &num);
	int ori = num;
	while (num > 0) {
		square *= 10;
		num /= 10;
		i++;
	}
	square /= 10;
	//printf("%d\n", square);
	while (square > 0) {
		int verticalnumber = ori / square;
		ori %= square;
		int verticalnumber2 = ori / square;
		printf("%d\n", verticalnumber);
		printf("%d\n", verticalnumber2);
		if (num % 10 == 0) {
			break;
		}
	}
	//printf("%d\n", i);
}