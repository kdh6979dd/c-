//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	int coin = 1000;
//	int price_of_jelly;
//	printf("지불금: %d원\n", coin);
//	printf("젤리의 가격:");
//	scanf("%d:", &price_of_jelly);
//
//	int change = coin - price_of_jelly;
//	printf("거스름돈:%d\n", change);
//
//	int change500 = change / 500;
//	change = change % 500;
//	int change100 = change / 100;
//	change = change % 100;
//	int change50 = change / 50;
//	change = change % 50;
//	int change10 = change / 10;
//
//	printf("500원 %d개, ", change500);
//	printf("100원 %d개, ", change100);
//	printf("50원 %d개, ", change50);
//	printf("10원 %d개, ", change10);
//
//	return 0;
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("첫숫자: %d\n", randInt);
//	printf("다음숫자:%d", nextInt);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10+50;
//	printf("첫숫자: %d\n", randInt);//0~9
//	printf("다음숫자:%d", nextInt);//50~59
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000;//(0~9까지에 +1 * 1000) 따라서 1~10(000)원
//	printf("%d원이다.\n", myMoney);
//
//	int coin500 = rand() % 4 * 500;//(0~3까지에 *500) 따라서 0~1500
//	int coin100 = rand() % 5000;//0~4999
//	coin100 = coin100 / 100 * 100;//따라서 0~4900
//
//	printf("그리고 과자의 가격은");
//	printf(" %d원이다.", coin500 + coin100);//0~6400
//	printf("\n나는 과자를 살 수 있을까?\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple == 15);//apple이 15이면 실행
//	{
//		printf("apple은 15개 있습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple != 17)//apple이 17이 아니면 실행
//	{
//		printf("apple은 17개가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple > 7)//apple이 7보다 크면 실행
//	{
//		printf("apple은 7개보다 많습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple < 20)//apple이 20보다 적으면 실행
//	{
//		printf("apple은 20개보다 적습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int apple = 15;
//	if (apple) {//apple이 0이 아니면 실행
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int apple = 15;
//	if (!apple) { // apple이 0이면 실행
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int apple = 0;
//	if (apple == 10) { //apple이 10이면 실행
//		printf("apple은 10개 있습니다.\n");
//	}
//	else if (apple == 0) { //apple이 0이면 실행
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int apple = 15;
//	if (!apple) { //apple이 0이면 실행
//		printf("apple은 하나도 없습니다.\n");
//	}
//	else //if가 틀리면 (apple이 0이 아니면) 실행
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}

#include <stdio.h>

int main() {
	int input;
	if
}