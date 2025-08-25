#include <stdio.h>

//숙제오답
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
//	printf("돈을 입력해주세요.(원)");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("만원권 %d개, ", coin10000);
//	printf("오천원권 %d개, ", coin5000);
//	printf("천원권 %d개, ", coin1000);
//	printf("나머지는 동전입니다.");
//	return 0;
//}

int main()
{
	int coin = 1000;
	int price_of_jelly;
	printf("지불금: %d원\n", coin);
	printf("젤리의 가격:");
	scanf("%d:", &price_of_jelly);

	int change = coin - price_of_jelly;
	printf("거스름돈:%d\n", change);

	int change500 = change / 500;
	int change100 = change / 100;
	int change50 = change / 50;
	int change10 = change / 10;

	printf("500원 %d개, ", change500);
	printf("100원 %d개, ", change100);
	printf("50원 %d개, ", change50);
	printf("10원 %d개, ", change10);

	return 0;

}
