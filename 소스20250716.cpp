//#include <stdio.h>
//
//int main() {
//	char command = 'i';
//
//	switch (command) {
//	case'i':
//		printf("������â ����\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char command = 'i';
//	switch (command) {
//	case'i':
//		printf("������â ����\n");
//	case'm':
//		printf("����â ����\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char command = 'm';
//	switch (command) {
//	case'i': printf("������â ����\n");
//	case'm': printf("����â ����\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char command = 'm';
//	switch (command) {
//	case'i': printf("������â ����\n");
//		break;
//	case'm': printf("����â ����\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char command;
//	printf("Ŀ�ǵ带 �Է��ϼ���:");
//	scanf("%c", &command);
//	switch (command) {
//	case'i': printf("������â ����\n");
//		break;//break�� ����
//	case'm': printf("����â ����\n");
//		break;
//	default: printf("������ ����� �����ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char number = 1;
//	switch (number) {
//	case 1: printf("one\n"); break;
//	case 2: printf("two\n"); break;
//	case 3: printf("three\n"); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int input1;
//	int input2;
//	char oper;
//	printf("����1:");
//	scanf("%d", &input1);
//	printf("����2:");
//	scanf("%d", &input2);
//	printf("��ȣ:");
//	scanf(" %c", &oper);
//	switch (oper)
//	{
//	case'+': printf("%d", input1 + input2); break;
//	case'-': printf("%d", input1 - input2); break;
//	case'*': printf("%d", input1 * input2); break;
//	case'/': printf("%d", input1 / input2); break;
//	case'%': printf("%d", input1 % input2); break;
//	default: break;
//	}
// return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int month;
//	printf("����:");
//	scanf("%d", &month);
//	switch (month) {
//	case 1: printf("%d > January", month); break;
//	case 2: printf("%d > February", month); break;
//	case 3: printf("%d > March", month); break;
//	case 4: printf("%d > April", month); break;
//	case 5: printf("%d > May", month); break;
//	case 6: printf("%d > June", month); break;
//	case 7: printf("%d > July", month); break;
//	case 8: printf("%d > August", month); break;
//	case 9: printf("%d > September", month); break;
//	case 10: printf("%d > October", month); break;
//	case 11: printf("%d > November", month); break;
//	case 12: printf("%d > December", month); break;
//	default: break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char command;
//
//	printf("<, a ���� �̵� \n");
//	printf(">, d ������ �̵� \n");
//	scanf("%c", &command);
//	switch (command) {
//	case '<':
//	case 'a':
//		//case�� ������ �Ἥ �����ڵ� ���డ��
//		printf("�������� �̵��մϴ�.\n");
//		break;
//	case'>': case'd':
//		printf("���������� �̵��մϴ�.\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int input;
//	int number;
//	const int option = 3;
//
//	printf("�޴��� �����ϼ���");
//	printf("1.�� ���� 2.�̾��ϱ� 3.�ɼ�\n");
//
//	scanf("%d", &input);
//
//	switch (input) {
//	case 1:
//		printf("�� ���� ����.\n");
//		break;
//	case 2:
//		printf("���̺� ������ �ε�.\n");
//		break;
//	case option:
//		printf("�ɼ� ����.\n");
//		break;
//	default:
//		printf("������ ����� �����ϴ�.\n");
//
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int number;
//
//	scanf("%d", &number);
//
//	if (number >= 0 && number <= 9) {
//		switch (number) {
//		case 3: case 6: case 9: printf("¦"); break;
//		default: printf("������ ����� �����ϴ�."); break;
//		}
//	}		
//}

//#include <stdio.h>
//
//int main() {
//	char command = 'x';
//
//	switch (command) {
//	case 'x': printf("���ĺ� x �Է�.\n"); break;
//	case 'X': printf("����ǥ �Է�.\n"); break;
//	}
//
//	return 0;
//}

#include <stdio.h>

int main() {
	int i_menu;

	printf("1.���ϱ� 2.����\n");
	scanf("%d", &i_menu);

	switch (i_menu)
	{
	case 1: {
		int number1, number2;
		printf("���� �� ���� �Է��ϼ���\n");
		scanf("%d%d", &number1, &number2);
		printf("%d+%d=%d\n", number1, number2, number1 + number2);
	}
		  break;
	case 2: {
		int number3, number4;
		printf("���� �� ���� �Է��ϼ���\n");
		scanf("%d%d", &number3, &number4);
		printf("%d-%d=%d\n", number3, number4, number3 - number4);
	}
		  break;
	}
	return 0;
}