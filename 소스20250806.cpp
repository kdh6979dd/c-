//30p ���� 6

//#include <stdio.h>
//
//int main() {
//	int num;
//	int total = 0, temp = 0, sequence = 0;
//
//	while (1) {
//		printf("%c : ", 'A' + sequence);
//		scanf("%d", &num);
//		printf("=> ");
//
//		if (num < 0 || num > 3) {
//			printf("0~3������ ���ڸ� �Է��ϼ���\n");
//			continue;
//		}
//		temp = num;
//		total += temp;
//		printf("%d\n", total);
//
//		sequence = !sequence; //1��
//		//sequence = ++sequence % 2; //2��
//
//		if (total >= 31) {
//			break;
//		}
//	}
//	printf("%c�� �̰���ϴ�!", 'A' + sequence);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int temperature = 20;
//	do
//	{
//		printf("���� �µ� : %d��\n", temperature);
//		temperature--;
//	} while (temperature > 28);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int input;
//	enum {GAMEOVER, NEWGAME, LOADGAME, OPTION};
//	do {
//		printf("\n�޴��� �����ϼ���.\n");
//		printf("1.�� ���� 2.�̾��ϱ� 3.�ɼ�(0:��������)\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case NEWGAME:
//			printf("�� ���� ����\n");
//			break;
//		case LOADGAME:
//			printf("���̺� ������ �ε�\n");
//			break;
//		case OPTION:
//			printf("�ɼ� ����\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//	printf("������ �����մϴ�.\n");
//	return 0;
//}

#include <stdio.h>

int main() {
	int select;
	int id, password;
	enum { TEMP, SIGNIN, SIGNUP, OPTION, DEV };
	do {
		printf("\n�޴��� �����ϼ���.\n");
		printf("1. �α���\n2. ȸ������\n3. �ɼ�(0:��������)\n4. ���� �����\n\n");
		printf("=>");
		scanf("%d", &select);
		printf("\n");

		switch (select) {
		case SIGNIN:
			printf("���̵� : ");
			scanf("%d", &id);
			printf("��й�ȣ : ");
			scanf("%d", &password);
			break;
		case SIGNUP:
			printf("���̵� : ");
			scanf("%d", &id);
			printf("��й�ȣ : ");
			scanf("%d", &password);
			break;
		case OPTION:
			printf("�ɼ� ����\n");
			break;
		case DEV:
			printf("���� ����� : A\n���� ����� : B\n���� ����� : C\n");
			break;
		}
	}
	while (select != (select >= 1 && select <= 4));
	printf("������ �����մϴ�.\n");
	return 0;
}