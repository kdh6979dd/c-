//#include <stdio.h>
//
//int main() {
//	int input;
//	scanf("%d", &input);
//	if (input > 0)
//		printf("%d��(��) ���\n", input);
//	else if (input < 0)
//		printf("%d��(��) ����\n", input);
//	else
//		printf("%d��(��) 0\n", input);
//}

//#include <stdio.h>
//
//int main() {
//	int input = 0;
//	scanf("%d", &input);
//	if (input >= 10 && input <= 99)
//		printf("%d��(��) �� �ڸ� �����Դϴ�", input);
//	else
//		printf("%d��(��) �� �ڸ� ���ڰ� �ƴմϴ�", input);
//}

//#include <stdio.h>
//
//int main() {
//	int height = 170;
//	if (height > 150) {
//		printf("Ű�� 150 �̻��Դϴ�.\n");
//	}
//	if (height > 160) {
//		printf("Ű�� 160 �̻��Դϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int height = 170;
//	if (height > 150) {
//		printf("Ű�� 150 �̻��Դϴ�.\n");
//	}
//	else if (height > 160) {
//		//else if�� if�� Ʋ�������� ����ȴ�
//		printf("Ű�� 160 �̻��Դϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int y_age;
//	scanf("%d", &y_age);
//	printf("��ü������\n");
//	if (y_age >= 12)
//	{
//		printf("12�� ������\n");
//	}
//	if (y_age >= 15)
//	{
//		printf("15�� ������\n");
//	}
//}

//#include <stdio.h>
//
//int main() {
//	char initial;
//	scanf("%c", &initial);
//	if (initial >='A' && initial <= 0x5a) //'A' = 0x41= 65
//		printf("�빮��");
//	else if (initial >= 0x61 && initial <= 0x7a)
//		printf("�ҹ���");
//}

//#include <stdio.h>
//
//int main() {
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("����1�� ����2���� Ů�ϴ�.\n");
//	}
//	else {
//		if (number < answer) {
//			printf("����2�� ����1���� Ů�ϴ�.\n");
//		}
//		else {
//			printf("����1�� ����2�� �����ϴ�.\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int number, answer;
//	scanf("%d%d", &number, &answer);
//	if (number > answer) {
//		printf("����1�� ����2���� Ů�ϴ�.\n");
//	}
//	else if (number < answer) {
//		printf("����2�� ����1���� Ů�ϴ�.\n");
//	}
//	else {
//		printf("����1�� ����2�� �����ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int score = 75;
//	if (score > 90) {
//		printf("������ A����Դϴ�.\n");
//	}
//	else if (score > 80) {
//		printf("������ B����Դϴ�.\n");
//	}
//	else if (score > 70) {
//		printf("������ C����Դϴ�.\n");
//	}
//	else if (score > 60) {
//		printf("������ D����Դϴ�.\n");
//	}
//	else {
//		printf("������ F����Դϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int number = -11;
//	if (number > 0) {
//		printf("number�� ����Դϴ�.\n");
//	}
//	else if (number < 0) {
//		printf("number�� �����Դϴ�.\n");
//	}
//	else {
//		printf("number�� 0�Դϴ�.\n");
//	}
//	if (number % 2 == 0) {
//		printf("number�� ¦���Դϴ�.\n");
//	}
//	else {
//		printf("number�� Ȧ���Դϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char arrowkey;
//	scanf("%c", &arrowkey);
//	if (arrowkey == 'w') {
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	}
//	else if (arrowkey == 'a') {
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	}
//	else if (arrowkey == 's') {
//		printf("�Ʒ� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	}
//	else if (arrowkey == 'd') {
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	}
//}

//#include <stdio.h>
//
//int main() {
//	int gauge;
//	scanf("%d", &gauge);
//	if (gauge >= 45 && gauge <= 55) {
//		printf("Perfect");
//	}
//	else if (gauge >= 35 && gauge <= 65) {
//		printf("Excellent");
//	}
//	else {
//		printf("good");
//	}
//}

//#include <stdio.h>
//
//int main() {
//	int input;
//	scanf("%d", &input);
//
//	if (input % 3 == 0) { // ��ø if ��밡��
//		printf("%d��(��) 3�� ����Դϴ�. ", input);
//		if (input % 6 == 0) {
//			printf("%d��(��) 6�� ����Դϴ�. ", input);
//		}
//		if (input % 9 == 0) {
//			printf("%d��(��) 9�� ����Դϴ�. ", input);
//		}
//	}
//	return 0;
//}