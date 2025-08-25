//#include <stdio.h>
//
//int main() {
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("양 %d마리\n", sheep);
//		if (sheep == 3) {
//			printf("도중에 잠들었다!\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		if (sheep == 3) {
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}

///*문제1*/
//#include <stdio.h>
//
//int main() {
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++) {
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}
//
///*문제2*/
//#include <stdio.h>
//
//int main() {
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++) {
//		if (sheep % 10 == 0) {
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		if (sheep == 45) {
//			break;
//		}
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int round;
//	for (round = 0; round < 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int round;
//	for (round = 0; round <= 10; round++) {
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int count;
//	for (count = 101;
//		count < 111;
//		count++) {
//		printf("아파트 %d동\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int number;
//	int sum_number = 0;
//	for (number = 1; number <= 20; number++) {
//		sum_number += number;
//	}
//	printf("도합 %d\n", sum_number);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int count;
//	int number;
//	printf("반복할 횟수를 입력하세요 :");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++) {
//		printf("삐약");
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int number;
//	for (number = 10; number <= 99; number++) {
//		printf("%d\n", number);
//	}
//	return 0;
//}

#include <stdio.h>

int main() {
	int num;
	int sum=1;
	for (num = 3; num <= 8; num++) {
		sum *= num+1;
		sum = sum * num;
		num += 1;
	}
	printf("%d\n", sum);
	return 0;
}

//#include <stdio.h>
//
//int main() {
//	int num;
//	if (num >= 1 && num <= 50) {
//		for (num = 1; num <= 50; num++);
//
//	}
//}
