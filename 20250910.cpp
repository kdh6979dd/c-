/* ����Ų��� 4�ܰ� (����) */

//#include <stdio.h>
//
//int main() {
//	int num;
//	int sequence = 0;
//	int expect = 1;
//	printf("            <����Ų ��� 31 !>\n");
//	printf("\n");
//	printf("������ �����մϴ�! : �ڿ� ���ڸ� �Է����ּ���.\n");
//	printf("31�� ���ϴ� ����� ���� �˴ϴ�. (0 �Է½� �ϳѱ�)\n");
//	printf("\n");
//	for (;;) {
//		for (int x = 1; x <= 3; x++)
//		{
//			printf("%c => : ", 'A' + sequence);
//			scanf("%d", &num);
//
//			if (num != expect) {
//				printf("\n");
//				printf("�߸��� �Է��Դϴ�.\n");
//				printf("���� �Է��ؾ��ϴ� ���� %d�Դϴ�.\n", expect);
//				printf("\n");
//				x--;
//				continue;
//			}
//			expect++;
//		}
//		sequence = !sequence;
//		printf("���� �Ѿ�ϴ�.\n");
//		printf("\n");
//	}
//	printf("���� %c�� �¸��Դϴ�!", 'A' + sequence);
//	return 0;
//}

/* ����Ų��� 5�ܰ� */

#include <stdio.h>

int main() {
	int num;
	int sequence = 0;
	int expect = 1;
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
		
			if (num == 0 && x == 1) {
				printf("���� �ѱ�� ���ؼ��� �ϳ� �̻��� ���� ���ؾ� �մϴ�.\n");
				x -= 1;
				continue;
			}
			
			
			if (num == 0 && x > 1) {
				break;
			}

			if (num != expect) {
				printf("\n");
				printf("�߸��� �Է��Դϴ�.\n");
				printf("���� �Է��ؾ��ϴ� ���� %d�Դϴ�.\n", expect);
				printf("\n");
				x--;
				continue;
			}
			if (num == 31){
				break;
			}


			expect++;
		}
		sequence = !sequence;
		if (num == 31) {
			break;
		}
		printf("���� �Ѿ�ϴ�.\n");
		printf("\n");
	}
	printf("���� %c�� �¸��Դϴ�!", 'A' + sequence);
	return 0;
}