// 숙제 8번 문제 
//#include <stdio.h>
//
//int main() {
//	int num;
//	int i = 0;
//	int square = 1;
//	scanf("%d", &num);
//	int ori = num;
//	while (num > 0) {
//		square *= 10;
//		num /= 10;
//		i++;
//	}
//	square /= 10;
//	//printf("%d\n", square);
//	while (square > 0) {
//		int verticalnumber = ori / square; //앞자리 숫자 구함
//		ori %= square; //ori = 3721 % 1000 = 721 
//		square /= 10; //자릿수 낮추기
//		//printf("%d\n", verticalnumber);
//		int count = 0;
//		while (count < verticalnumber) {
//			printf("\u2665\u2665");
//			count++;
//		}
//		printf("\n");
//	}
//}

//----------------------------------------------------------

//#include <stdio.h>
//
//int main() 
//{
//	int count = 0;
//
//	while (count < 3) //count 가 0,1,2 일 때 실행
//
//	{
//		printf("현재 count : %d\n", count);
//		printf("count가 3보다 작은 동안 반복\n");
//		count++;
//
//	//count를 증가시켜 조건을 만족하지 못하게 함
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count = 3; //count가 3,2,1일 때 실행
//
//	while (count > 0) {
//		printf("현재 count : %d\n", count);
//		printf("count가 0보다 큰 동안 반복\n");
//		count--;
//
//		// count를 감소시켜 조거늘 만족하지 못하게 함
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int count = 6;
//
//	while (count > 0) {
//		printf("'C'");
//		count--;					
//	}
//}
//
//#include <stdio.h>
//
//int main() {
//	int count = -10;
//
//	while (count<=0) {
//		printf("%d\n", count);
//		count++;
//	}
//}
//
//#include <stdio.h>
//
//int main() {
//	int count = 0;
//
//	while (count <= 100) {
//		if (count % 5 == 0) {
//			printf("%d\n", count);
//		}
//		count++;
//	}
//}

//#include <stdio.h>
//
//int main() {
//	int count = 3;
//	while (count) //count가 0일 때 반복문이 끝남
//	{
//		if (count == 1) {
//			//count가 1이면 {}실행
//			break;
//		}
//		printf("현재 count: %d\n", count);
//		printf("count가 0이 아니면 반복\n");
//		count--;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char alphabat;
//	while (1) { //무한반복
//		printf("알파벳을 입력해주세요(다른 것 입력시 다시입력):");
//		scanf("%c", &alphabat);
//		if (alphabat >= 'a' && alphabat <= 'z') {
//			printf("소문자를 입력하셨습니다.\n");
//		}
//		else if (alphabat >= 'A' && alphabat <= 'Z') {
//			printf("대문자를 입력하셨습니다.\n");
//		}
//		else {
//			continue;
//		}
//		printf("입력한 값: %c\n", alphabat);
//	}
//}

//#include <stdio.h>
//
//int main() {
//	int number, total = 0;
//	while (1) {
//		printf("양수를 입력해주세요(0입력시 종료);");
//		scanf("%d", &number);
//		//number가 0이면 반복문 탈출
//		if (number == 0) {
//			break;
//		}
//		//number가 음수이면 다시 입력받음
//		else if (number < 0) { continue; }
//
//		total = total + number;
//		printf("%d\n", total);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int number = 1;
//	int multi = 1;
//	while (1) {
//		multi *= number;
//		if (multi >= 50000) {
//			break;
//		}
//		number++;
//	}
//	printf("%d\n", number);
//	return 0;
//}

#include <stdio.h>

int main() {
	char alphabat;
	while (alphabat) {
		alphabat++;
		printf("%c\n", alphabat);
	}
}