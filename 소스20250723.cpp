//#include <stdio.h>
//
//void main() {
//	int a, b;
//
//	while (1) {
//		printf("���� �� �� �Է� (���߷��� 0�� �Է�):");
//		scanf("%d %d", &a, &b);
//
//		if (a == 0)
//			break;
//		printf("%d+%d=%d\n", a, b, a + b);
//	}
//
//	printf("0�� �Է��ؼ� for���� Ż���߽��ϴ�.\n");
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
//	printf("1~100������ ��(3�� ��� ����): %d\n", hap);
//}

#include <stdio.h>

int main() {
	int number;
	printf("���ڸ� ���� �� �Է� : ");
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