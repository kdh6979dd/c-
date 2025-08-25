/*----------숙제----------*/

//#include <stdio.h>
//
//int main() {
//	int i;
//	for (i = 0; i < 3; i++)
//		printf("IT ");
//		printf("CookBook ");
//}

//#include <stdio.h>
//
//int main() {
//	int hap = 0;
//	int i;
//
//	for (i = 300; i <= 900; i+=2) {
//		hap += i;
//	}
//	printf(" 300에서 900까지의 짝수의 합: %d \n", hap);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int i;
//	int hap = 0;
//
//	for (i = 1; i <= 1000; i++) {
//		if (i % 3 == 0 || i % 7 == 0) {
//			hap += i;
//		}
//	}
//	printf("3의 배수 또는 7의 배수의 합: %d\n", hap);
//	return 0;
//}

/*----------숙제----------*/

//#include <stdio.h>
//
//int main() {
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++) {
//		printf("%d번째 내부 반복문 진입 \n", outer);
//
//		//내부 for 문 앞에 넣은 코드는 그 전에 실행
//		for (inter = 0; inter < 5; inter++) {
//			printf("내부 반복문 %d번 반복\n", inter);
//		}
//
//		//내부 for문 앞에 넣은 코드는 그 후에 실행
//		printf("%d번째 내부 반복문 탈출\n\n", outer);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter = 0; inter < 5; inter++) {
//			printf("*");
//		}
//		//안쪽 반복문 반복시마다 * 찍힘
//		//내부 for 문 뒤에 넣은 코드는 내부 for문 반복 끝나고 실행
//		printf("\n");//바깥반복문 반복시마다 줄바꿈
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter = 0; inter < outer + 1; inter++) {
//			printf("*");
//			//내부 반복문의 조건문에서 외부 반복문의 outer 사용
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int outer, inter1, inter2;
//	for (outer = 0; outer < 5; outer++) {
//		//반복하여 ' '(스페이스 키) 출력
//		for (inter1 = 0; inter1 < 5 - outer; inter1++) {
//			printf(" ");
//		}
//		//반복문 안에 여러 개의 for 문 사용
//		for (inter2 = 0; inter2 < outer + 1; inter2++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int outer, inter1, inter2;
//	for (outer = 0; outer < 5; outer++) {
//		//반복하여 ' '(스페이스 키) 출력
//		for (inter1 = 0; inter1 < 5 - outer; inter1++) {
//			printf(" ");
//		}
//		//초기화부분에 바깥 for문의 변수 사용
//		for (inter2 = 0; inter2 < outer + 1; inter2++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include <stdio.h>

int main() {
	int LINE = 4;
	/*scanf("%d", &LINE);*/

	for (int y = LINE; y >= 1; y--) {
		for (int x = 1; x <= y; x++) {
			printf("*");
		}
		printf("\n");
	}
}