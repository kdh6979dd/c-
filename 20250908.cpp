//#include  <stdio.h>
//
//int main() {
//	int person;
//	printf("<����Ų ��� 31!>\n");
//	printf("������ �����մϴ�! : �ڿ� ���ڸ� �Է����ּ���.\n");
//	for (;;) {
//		for (int x = 1; x <= 3; x++) {
//			if (x >= 1) {
//				printf("A : ");
//			}
//			if (x == 3) {
//				printf("B : ");
//			}
//			scanf("%d", &person);
//		}
//		printf("���� �Ѿ�ϴ�.\n");
//	}
//}


/* ����Ų��� 1�ܰ� */

//#include <stdio.h>
//
//int main() {
//	int num;
//	int total = 0, temp = 0, sequence = 0;
//	printf("<����Ų ��� 31!>\n");
//	printf("������ �����մϴ�! : �ڿ� ���ڸ� �Է����ּ���.\n");
//	for (;;) {
//		for (int x = 1; x <= 3; x++)
//		{
//			printf("%c => : ", 'A' + sequence);
//			scanf("%d", &num);
//		}
//
//		printf("���� �Ѿ�ϴ�.\n");
//		//printf("%d\n", total);
//
//		sequence = !sequence; //��Ÿ��1
//		//sequence = ++sequence % 2; //��Ÿ��2
//
//		if (total >= 31) {
//			break;
//		}
//	}
//	printf("%c�� �̰���ϴ�!", 'A' + sequence);
//	return 0;
//}

/* ����Ų��� 2�ܰ� */

//#include <stdio.h>
//
//int main() {
//	int num;
//	int sequence = 0;
//	printf("            <����Ų ��� 31 !>\n");
//	printf("\n");
//	printf("������ �����մϴ�! : �ڿ� ���ڸ� �Է����ּ���.\n");
//	printf("31�� ���ϴ� ����� ���� �˴ϴ�.\n");
//	printf("\n");
//	for (;;) {
//		for (int x = 1; x <= 3; x++)
//		{
//			printf("%c => : ", 'A' + sequence);
//			scanf("%d", &num);
//			if (num >= 31) {
//				break;
//			}
//		}
//		if (num >= 31) {
//			sequence = !sequence;
//			break;
//		}
//		sequence = !sequence;
//		printf("���� �Ѿ�ϴ�.\n");
//	}
//	printf("���� %c�� �¸��Դϴ�!", 'A' + sequence);
//	return 0;
//}

/* ����Ų��� 3�ܰ� */

//#include <stdio.h>
//
//int main() {
//	int num;
//	int sequence = 0;
//	printf("            <����Ų ��� 31 !>\n");
//	printf("\n");
//	printf("������ �����մϴ�! : �ڿ� ���ڸ� �Է����ּ���.\n");
//	printf("31�� ���ϴ� ����� ���� �˴ϴ�.\n");
//	printf("\n");
//	for (;;) {
//		for (int x = 1; x <= 3; x++)
//		{
//			printf("���� �Է��ؾ��ϴ� ���� %d�Դϴ�.\n", x);
//			printf("%c => : ", 'A' + sequence);
//			scanf("%d", &num);
//			if (num >= 31) {
//				break;
//			}
//		}
//		if (num >= 31) {
//			sequence = !sequence;
//			break;
//		}
//		sequence = !sequence;
//		printf("���� �Ѿ�ϴ�.\n");
//	}
//	printf("���� %c�� �¸��Դϴ�!", 'A' + sequence);
//	return 0;
//}

/* ����Ų��� 4�ܰ� */

//#include <stdio.h>
//
//int main() {
//	int num;
//	int sequence = 0;
//	printf("            <����Ų ��� 31 !>\n");
//	printf("\n");
//	printf("������ �����մϴ�! : �ڿ� ���ڸ� �Է����ּ���.\n");
//	printf("31�� ���ϴ� ����� ���� �˴ϴ�.\n");
//	printf("\n");
//	for (;;) {
//		for (int x = 1; x <= 3; x++)
//		{
//			printf("%c => : ", 'A' + sequence);
//			scanf("%d", &num);
//			if (num > 3) {
//				printf("�߸��� �Է��Դϴ�.\n");
//				printf("���� �Է��ؾ��ϴ� ���� %d�Դϴ�.\n", x);
//			}
//			
//			if (num >= 31) {
//				break;
//			}
//		}
//		if (num >= 31) {
//			sequence = !sequence;
//			break;
//		}
//		sequence = !sequence;
//		printf("���� �Ѿ�ϴ�.\n");
//	}
//	printf("���� %c�� �¸��Դϴ�!", 'A' + sequence);
//	return 0;
//}

/* ����Ų��� 4�ܰ� */

#include <stdio.h>

int main() {
	int num;
	int sequence = 0;
	printf("            <����Ų ��� 31 !>\n");
	printf("\n");
	printf("������ �����մϴ�! : �ڿ� ���ڸ� �Է����ּ���.\n");
	printf("31�� ���ϴ� ����� ���� �˴ϴ�. (0 �Է½� �ϳѱ�)\n");
	printf("\n");
	for (;;) {
		for (int x = 1; x <= 3; x++)
		{
			printf("%c => : ", 'A' + sequence);
			scanf("%d", &num);
			
			if (num >= 31) break;

			if (num != y) {
				printf("�߸��� �Է��Դϴ�.\n");
				printf("���� �Է��ؾ��ϴ� ���� %d�Դϴ�.\n", y);
				printf("\n");
				continue;
			}
			
			/*if (num == 0) {
				continue;
			}*/
		}
		sequence = !sequence;

		if (num >= 31) break;

		printf("���� �Ѿ�ϴ�.\n");
		printf("\n");
	}
	printf("���� %c�� �¸��Դϴ�!", 'A' + sequence);
	return 0;
}