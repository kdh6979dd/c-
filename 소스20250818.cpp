//#include <stdio.h>
//
//int main() {
//	int num;
//	int sum=1;
//	for (num = 3; num <= 8; num++) {
//		sum *= num;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int num = 1;
//	for (num = 1; num <= 50; num++) {
//		int division = num / 10;
//		int persent = num % 10;
//
//		if ((division == 3 || division == 6 || division == 9) 
//			|| (persent == 3 || persent == 6 || persent == 9)) {
//			printf("%d\n", num);
//		}
//		if (num > 50) {
//			break;
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int number;
//	printf("100 ������ �������� ����մϴ�.\n");
//
//	//�������� �ڿ����� �����Ͽ� ���� ��
//
//	for (number = 1; (number * number) <= 100; number++) {
//		//�����Ŀ� ������ ���ԵǾ �ȴ�.
//		printf("%d\n", number * number);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int num;
//	printf("100���� 7�� ����� ����մϴ�.\n");
//
//	for (num = 7; num <= 100; num += 7) {
//		printf("%d\n", num);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char input;
//	for (;;) {
//		//���ǹ��� ���� ������ ���ѹݺ�
//		scanf(" %c", &input);
//		switch (input) {
//		case 's':
//			printf("START GAME\n");
//			break;
//		case 'e':
//			printf("EXIT GAME\n");
//			return 0;
//		//e �Է½� ���α׷� ����
//		// main�ȿ��� return �� ���α׷��� ����ȴ�.
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int exitFor, number;
//	printf("1���� 10���� ���� �� ��� :");
//	for (number = 10, exitFor = number - 1;
//	exitFor; number *= exitFor, exitFor--)
//	{
//
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	printf("1���� 10���� ���� �� ���:");
//	for (int number = 10, int exitFor = number - 1;
//		exitFor; number += exitFor, exitFor--) {
//
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int count;
//	for (count = 0; count < 5; count++) {
//		printf("%d\n", count);
//	}
//	return 0;
//}


//����4 200������ 11�� ����� ��� ���

#include <stdio.h>

int main() {
	int num=1;
	for (num = 1; num<=200; num++) {
		num %= 11;
	}
	printf("%d\n", num);
	return 0;
}

//����5 

//#include <stdio.h>
//
//int main() {
//	float sqLine;
//	for (sqLine = 0.1; sqLine <= 5.25; sqLine += 0.1) {
//		if (sqLine * 4 <= 21) {
//			printf("%.1f\n", sqLine);
//		}
//	}
//	return 0;
//}

//37p ���� 4,5 if������ �غ���