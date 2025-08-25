//#include <stdio.h>
//
//int main() {
//	int num;
//	int sum=1;
//	for (num = 3; num <= 8; num++) {
//		sum *= num;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int num = 1;
//	for (num = 1; num <= 50; num++) {
//		int division = num / 10;
//		int persent = num % 10;
//
//		if ((division == 3 || division == 6 || division == 9) 
//			|| (persent == 3 || persent == 6 || persent == 9)) {
//			printf("%d\n", num);
//		}
//		if (num > 50) {
//			break;
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int number;
//	printf("100 이하의 제곱수를 출력합니다.\n");
//
//	//제곱수는 자연수를 제곱하여 나온 수
//
//	for (number = 1; (number * number) <= 100; number++) {
//		//조간식에 계산식이 포함되어도 된다.
//		printf("%d\n", number * number);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int num;
//	printf("100이하 7의 배수를 출력합니다.\n");
//
//	for (num = 7; num <= 100; num += 7) {
//		printf("%d\n", num);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char input;
//	for (;;) {
//		//조건문을 적지 않으면 무한반복
//		scanf(" %c", &input);
//		switch (input) {
//		case 's':
//			printf("START GAME\n");
//			break;
//		case 'e':
//			printf("EXIT GAME\n");
//			return 0;
//		//e 입력시 프로그램 종료
//		// main안에서 return 시 프로그램이 종료된다.
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int exitFor, number;
//	printf("1부터 10까지 곱한 수 출력 :");
//	for (number = 10, exitFor = number - 1;
//	exitFor; number *= exitFor, exitFor--)
//	{
//
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	printf("1부터 10까지 곱한 수 출력:");
//	for (int number = 10, int exitFor = number - 1;
//		exitFor; number += exitFor, exitFor--) {
//
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int count;
//	for (count = 0; count < 5; count++) {
//		printf("%d\n", count);
//	}
//	return 0;
//}


//문제4 200이하의 11의 배수를 모두 출력

#include <stdio.h>

int main() {
	int num=1;
	for (num = 1; num<=200; num++) {
		num %= 11;
	}
	printf("%d\n", num);
	return 0;
}

//문제5 

//#include <stdio.h>
//
//int main() {
//	float sqLine;
//	for (sqLine = 0.1; sqLine <= 5.25; sqLine += 0.1) {
//		if (sqLine * 4 <= 21) {
//			printf("%.1f\n", sqLine);
//		}
//	}
//	return 0;
//}

//37p 문제 4,5 if문없이 해보기
