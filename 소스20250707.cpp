#include <stdio.h>

//��������
//#include <stdio.h>
//
//int main()
//{
//	int a = 100;
//
//	printf("%d\n",++a);
//	printf("%d\n",a++);
//	printf("%d\n",--a);
//}

//#include <stdio.h>
//
//int main()
//{
//	int number1, number2;
//	scanf_s("%d%d", &number1, &number2);
//	printf("%d=", number1 / number2);
//	printf("%d/%d\n", number1, number2);
//	return 0;
//}

//int main()
//{
//	int coin;
//	printf("���� �Է����ּ���.(��)");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("������ %d��, ", coin10000);
//	printf("��õ���� %d��, ", coin5000);
//	printf("õ���� %d��, ", coin1000);
//	printf("�������� �����Դϴ�.");
//	return 0;
//}

int main()
{
	int coin = 1000;
	int price_of_jelly;
	printf("���ұ�: %d��\n", coin);
	printf("������ ����:");
	scanf("%d:", &price_of_jelly);

	int change = coin - price_of_jelly;
	printf("�Ž�����:%d\n", change);

	int change500 = change / 500;
	int change100 = change / 100;
	int change50 = change / 50;
	int change10 = change / 10;

	printf("500�� %d��, ", change500);
	printf("100�� %d��, ", change100);
	printf("50�� %d��, ", change50);
	printf("10�� %d��, ", change10);

	return 0;

}