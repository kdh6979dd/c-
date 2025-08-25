//#include <stdio.h>
//
//void main() {
//	int a, b;
//
//	while (1) {
//		printf("더할 두 수 입력 (멈추려면 0을 입력):");
//		scanf("%d %d", &a, &b);
//
//		if (a == 0)
//			break;
//		printf("%d+%d=%d\n", a, b, a + b);
//	}
//
//	printf("0을 입력해서 for문을 탈출했습니다.\n");
//}

//#include <stdio.h>
//
//void main() {
//	int hap = 0;
//	int i;
//
//	for (i = 1; i <= 100; i++) {
//		if (i % 3 == 0)
//			continue;
//
//		hap += i;
//	}
//	printf("1~100까지의 합(3의 배수 제외): %d\n", hap);
//}

#include <stdio.h>

int main() {
	int number;
	printf("숫자를 여러 개 입력 : ");
	scanf("%d", &number);
	printf("%d\n", number / number);
	while (1) {
		if (number / 10 >= 100) {
			printf("%d\n", number % 10000 / 1000);
		}
		if (number / 10 >= 1000) {
			printf("%d\n", number % 1000 / 100);
		}
		if (number / 10 >= 1000) {
			printf("%d\n", number % 100 / 10);
		}
		if (number / 10 >= 1000) {
			printf("%d\n", number % 10);
			break;
		}
		if (number < 10)
			break;
	}
}
