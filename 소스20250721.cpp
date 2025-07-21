//#include <stdio.h>
//
//int main() {
//	int i_menu;
//
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//
//	switch (i_menu)
//	{
//	case 1: {
//		int number1, number2;
//		printf("숫자 두 개를 입력하세요\n");
//		scanf("%d%d", &number1, &number2);
//		printf("%d+%d=%d\n", number1, number2, number1 + number2);
//		break;
//		}
//	case 2: 
//		{
//		int number3, number4;
//		printf("숫자 두 개를 입력하세요\n");
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
//	case 'w': printf("'위 방향키를 입력하셨습니다.'\n"); break;
//	case 'a': printf("'좌 방향키를 입력하셨습니다.'\n"); break;
//	case 'd': printf("'우 방향키를 입력하셨습니다.'\n"); break;
//	case 's': printf("'아래 방향키를 입력하셨습니다.'\n"); break;
//	default: break;
//	}
//}

//#include <stdio.h>
//
//int main() {
//	printf("appetizer: 1.캐비어   2.샐러드     3.푸아그라\n");
//	printf("mainDish:  1.스테이크 2.생선요리   3.양갈비\n");
//	printf("dessert:   1.케잌     2.아이스크림 3.초콜릿무스\n");
//	int choose1, choose2, choose3;
//	printf("주문할 음식을 차례대로 입력하세요:\n");
//	scanf("%d %d %d", &choose1, &choose2, &choose3);
//	printf("주문한 음식은 ");
//	switch (choose1) {
//	case 1: printf("캐비어, "); break;
//	case 2: printf("샐러드, "); break;
//	case 3: printf("푸아그라, "); break;
//	}
//	switch (choose2) {
//	case 1: printf("스테이크, "); break;
//	case 2: printf("생선요리, "); break;
//	case 3: printf("양갈비, "); break;
//	}
//	switch (choose3) {
//	case 1: printf("케잌"); break;
//	case 2: printf("아이스크림"); break;
//	case 3: printf("초콜릿무스"); break;
//	}
//	printf("입니다\n");
//	}

//#include <stdio.h>
//int main() {
//	int i = 0;
//	while (i < 100)
//	{
//		printf("%3d(%02x) ", i, i);
//
//		if (i >= 70 && i < 80) { i++; continue; } //70번째는 건너뜀
//
//		if (i % 10 == 9)	printf("\n");         //10개마다 줄바꿈..
//		if (i == 93)	break;                    //loop를 나온다
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	while (0) // 0==false
//	{
//		printf("조건이 참일 경우 반복출력\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	while (1) //0 아닌 수 == true
//	{
//		printf("조건이 참일 경우 반복출력\n");
//	}
//	return 0;
//}

