//#include <stdio.h>
//
//int main() {
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("�� %d����\n", sheep);
//	}
//	printf("������!\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("�� %d����\n", sheep);
//		if (sheep == 3) {
//			printf("���߿� ������!\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		if (sheep == 3) {
//			printf("���Ƽ� ���� ���� ���ߴ�!\n");
//			continue;
//		}
//		printf("�� %d����\n", sheep);
//	}
//	return 0;
//}

///*����1*/
//#include <stdio.h>
//
//int main() {
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++) {
//		printf("�� %d����\n", sheep);
//	}
//	return 0;
//}
//
///*����2*/
//#include <stdio.h>
//
//int main() {
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++) {
//		if (sheep % 10 == 0) {
//			printf("���Ƽ� ���� ���� ���ߴ�!\n");
//			continue;
//		}
//		if (sheep == 45) {
//			break;
//		}
//		printf("�� %d����\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int round;
//	for (round = 0; round < 10; round++)
//	{
//		printf("���� %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int round;
//	for (round = 0; round <= 10; round++) {
//		printf("���� %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int count;
//	for (count = 101;
//		count < 111;
//		count++) {
//		printf("����Ʈ %d��\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int number;
//	int sum_number = 0;
//	for (number = 1; number <= 20; number++) {
//		sum_number += number;
//	}
//	printf("���� %d\n", sum_number);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int count;
//	int number;
//	printf("�ݺ��� Ƚ���� �Է��ϼ��� :");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++) {
//		printf("�߾�");
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int number;
//	for (number = 10; number <= 99; number++) {
//		printf("%d\n", number);
//	}
//	return 0;
//}

#include <stdio.h>

int main() {
	int num;
	int sum=1;
	for (num = 3; num <= 8; num++) {
		sum *= num+1;
		sum = sum * num;
		num += 1;
	}
	printf("%d\n", sum);
	return 0;
}

//#include <stdio.h>
//
//int main() {
//	int num;
//	if (num >= 1 && num <= 50) {
//		for (num = 1; num <= 50; num++);
//
//	}
//}