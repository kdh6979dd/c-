//#include <stdio.h>
//
//int main() {
//	int i_menu;
//
//	printf("1.���ϱ� 2.����\n");
//	scanf("%d", &i_menu);
//
//	switch (i_menu)
//	{
//	case 1: {
//		int number1, number2;
//		printf("���� �� ���� �Է��ϼ���\n");
//		scanf("%d%d", &number1, &number2);
//		printf("%d+%d=%d\n", number1, number2, number1 + number2);
//		break;
//		}
//	case 2: 
//		{
//		int number3, number4;
//		printf("���� �� ���� �Է��ϼ���\n");
//		scanf("%d%d", &number3, &number4);
//		printf("%d-%d=%d\n", number3, number4, number3 - number4);
//		break;
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main() {
//	printf("|\\_/|\n");
//	printf("|q p|   /}\n");
//	printf("( 0 )\"\"\"\\\n");
//	printf("|\"^\"`    |\n");
//	printf("||_/=\\\\__|\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char command;
//	scanf("%c", &command);
//	switch (command) {
//	case 'w': printf("'�� ����Ű�� �Է��ϼ̽��ϴ�.'\n"); break;
//	case 'a': printf("'�� ����Ű�� �Է��ϼ̽��ϴ�.'\n"); break;
//	case 'd': printf("'�� ����Ű�� �Է��ϼ̽��ϴ�.'\n"); break;
//	case 's': printf("'�Ʒ� ����Ű�� �Է��ϼ̽��ϴ�.'\n"); break;
//	default: break;
//	}
//}

//#include <stdio.h>
//
//int main() {
//	printf("appetizer: 1.ĳ���   2.������     3.Ǫ�Ʊ׶�\n");
//	printf("mainDish:  1.������ũ 2.�����丮   3.�簥��\n");
//	printf("dessert:   1.�ɟ�     2.���̽�ũ�� 3.���ݸ�����\n");
//	int choose1, choose2, choose3;
//	printf("�ֹ��� ������ ���ʴ�� �Է��ϼ���:\n");
//	scanf("%d %d %d", &choose1, &choose2, &choose3);
//	printf("�ֹ��� ������ ");
//	switch (choose1) {
//	case 1: printf("ĳ���, "); break;
//	case 2: printf("������, "); break;
//	case 3: printf("Ǫ�Ʊ׶�, "); break;
//	}
//	switch (choose2) {
//	case 1: printf("������ũ, "); break;
//	case 2: printf("�����丮, "); break;
//	case 3: printf("�簥��, "); break;
//	}
//	switch (choose3) {
//	case 1: printf("�ɟ�"); break;
//	case 2: printf("���̽�ũ��"); break;
//	case 3: printf("���ݸ�����"); break;
//	}
//	printf("�Դϴ�\n");
//	}

//#include <stdio.h>
//int main() {
//	int i = 0;
//	while (i < 100)
//	{
//		printf("%3d(%02x) ", i, i);
//
//		if (i >= 70 && i < 80) { i++; continue; } //70��°�� �ǳʶ�
//
//		if (i % 10 == 9)	printf("\n");         //10������ �ٹٲ�..
//		if (i == 93)	break;                    //loop�� ���´�
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	while (0) // 0==false
//	{
//		printf("������ ���� ��� �ݺ����\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	while (1) //0 �ƴ� �� == true
//	{
//		printf("������ ���� ��� �ݺ����\n");
//	}
//	return 0;
//}

