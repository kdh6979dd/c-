/* 문제 3번 */

//#include <stdio.h>
//
//int main() {
//    printf("  *\n");
//    printf(" ***\n");
//    printf("*****\n");
//    printf(" ***\n");
//    printf("  *\n");
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf(" ");
//	printf("*");
//}

//#include <stdio.h>
//
//int main() {
//	for (int x = 1; x <= 2; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= 1; x++) {
//		printf("*");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 1; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= 3; x++) {
//		printf("*");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 0; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= 5; x++) {
//		printf("*");
//	}
//	printf("\n");
//	
//	for (int x = 1; x <= 0; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= 5; x++) {
//		printf("*");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 1; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= 3; x++) {
//		printf("*");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 2; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= 1; x++) {
//		printf("*");
//	}
//}

//#include <stdio.h>
//int b = 5;
//int d = 1;
//
//int main() {
//	for (int c = 2; c >= 0; c--) {
//		for (int x = 1; x <= c; x++) {
//			printf(" ");
//		}
//		for (int x = 1; x <= d; x++) {
//			printf("*");
//		}
//		printf("\n");
//		d += 2;
//	}
//	for (int a = 0; a <= 2; a++) {
//		for (int x = 1; x <= a; x++) {
//			printf(" ");
//		}
//		for (int x = 1; x <= b; x++) {
//			printf("*");
//		}
//		printf("\n");
//		b -= 2;
//	}
//}


//#include <stdio.h>
//
//int main() {
//	int LINE;
//	scanf("%d", &LINE);
//	int d = 1;
//	for (int c = LINE-1; c >= 0; c--) {
//		for (int x = 1; x <= c; x++) {
//			printf(" ");
//		}
//		for (int x = 1; x <= d; x++) {
//			printf("*");
//		}
//		printf("\n");
//		d += 2;
//	}
//	int b = d-2;// LINE * 2 - 1;
//	for (int a = 0; a <= LINE; a++) {
//		for (int x = 1; x <= a; x++) {
//			printf(" ");
//		}
//		for (int x = 1; x <= b; x++) {
//			printf("*");
//		}
//		printf("\n");
//		b -= 2;
//	}
//}


/* 문제 4번 */

//#include <stdio.h>
//
//int main() {
//    printf("   1\n");
//    printf("  22\n");
//    printf(" 333\n");
//    printf("4444\n");
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//	printf(" ");
//	printf(" ");
//	printf(" ");
//	printf("1");
//	printf("\n");
//	printf(" ");
//	printf(" ");
//	printf("2");
//	printf("2");
//	printf("\n");
//	printf(" ");
//	printf("3");
//	printf("3");
//	printf("3");
//	printf("\n");
//	printf("4");
//	printf("4");
//	printf("4");
//	printf("4");
//	printf("\n");
//
//}


//#include <stdio.h>
//
//int main() {
//	for (int x = 1; x <= 3; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= 1; x++) {
//		printf("1");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 2; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= 2; x++) {
//		printf("2");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 1; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= 3; x++) {
//		printf("3");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 4; x++) {
//		printf("4");
//	}
//	printf("\n");
//
//}

//#include <stdio.h>
//
//int main() {
//	int b = 1;
//	for (int a = 3; a >= 0; a--) {
//		for (int x = 1; x <= a; x++) {
//			printf(" ");
//		}
//		for (int x = 1; x <= b; x++) {
//			printf("%d", b);
//		}
//		printf("\n");
//		b++;
//	}
//	printf("\n");
//}

//#include <stdio.h>
//
//int main() {
//	int b = 1;
//	int LINE;
//	scanf("%d", &LINE);
//	for (int a = LINE-1; a >= 0; a--) {
//		for (int x = 1; x <= a; x++) {
//			printf(" ");
//		}
//		for (int x = 1; x <= b; x++) {
//			printf("%d", b);
//		}
//		printf("\n");
//		b++;
//	}
//	printf("\n");
//}

//#include <stdio.h>
//
//int main() {
//    int outer = 4;
//    for (int outer2 = 1; outer2 <= outer; outer2++) {
//        for (int blank = 1; blank <= outer - outer2; blank++) {
//            printf(" ");
//        }
//        for (int inter = 1; inter <= outer2; inter++) {
//            printf("%d", outer2);
//        }
//        printf("\n");
//    }
//    return 0;
//}

#include  <stdio.h>

int main() {
	int person;
	printf("<베스킨 라빈스 31!>\n");
	printf("게임을 시작합니다! : 뒤에 숫자를 입력해주세요.\n");
	for (;;) {
		for (int x = 1; x <= 3; x++) {
			if (x >= 1) {
				printf("A : ");
			}
			if (x == 3) {
				printf("B : ");
			}
			scanf("%d", &person);
		}
		printf("턴이 넘어갑니다.\n");
	}
}

//#include  <stdio.h>
//
//int main() {
//	int A_num;
//	int B_num;
//	printf("            <베스킨 라빈스 31 !>\n");
//	printf("\n");
//	printf("게임을 시작합니다! : 뒤에 숫자를 입력해주세요.\n");
//	printf("31을 말하는 사람이 지게 됩니다.\n");
//	printf("\n");
//	for (int y = 1; y <= 10; y++) {
//		for (int x = 1; x <= 3; x++) {
//			printf("A : ");
//			scanf("%d", &A_num);
//		}
//		printf("턴이 넘어갑니다.\n");
//
//		for (int x = 1; x <= 3; x++) {
//			printf("B : ");
//			scanf("%d", &B_num);
//		}
//		printf("턴이 넘어갑니다.\n");
//
//		if (A_num || B_num == 31) {
//			break;
//		}
//	}
//}