/* 문제 2번 */
//#include <stdio.h>
//
//int main() {
//    printf("   *\n");
//    printf("  ***\n");
//    printf(" *****\n");
//    printf("*******\n");
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//	printf(" ");
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf(" ");
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
//	printf("*");
//	printf("*");
//}


//int main() {
//	for (int x = 1; x <= 3; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= 1; x++) {
//		printf("*");
//	}
//	printf("\n");
//
//
//	for (int x = 1; x <= 2; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= 3; x++) {
//		printf("*");
//	}
//	printf("\n");
//
//
//	for (int x = 1; x <= 1; x++) {
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
//	for (int x = 1; x <= 7; x++) {
//		printf("*");
//	}
//}

//#include <stdio.h>
//
//int main() {
//	int y=3;
//	int z=1;
//	// blank = 3,2,1
//	//* = 1 3 5 7
//	for (int x = 1; x <= y; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= z; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y--;
//	z += 2;
//
//	for (int x = 1; x <= y; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= z; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y--;
//	z += 2;
//
//	for (int x = 1; x <= y; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= z; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y--;
//	z += 2;
//
//	for (int x = 1; x <= y; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= z; x++) {
//		printf("*");
//	}
//}


//#include <stdio.h>
//
//int main() {
//	int z = 1;
//
//	for (int y = 3; y >= 0; y--) {
//		for (int x = 1; x <= y; x++) {
//			printf(" ");
//		}
//		for (int x = 1; x <= z; x++) {
//			printf("*");
//		}
//		printf("\n");
//		z += 2;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int LINE = 4;
//	int z = 1;
//	printf("\n");
//	printf("줄 개수:");
//	scanf("%d", &LINE);
//	printf("\n");
//	for (int y = LINE - 1; y >= 0; y--) {
//		for (int x = 1; x <= y; x++) {
//			printf(" ");
//		}
//		for (int x = 1; x <= z; x++) {
//			printf("*");
//		}
//		printf("\n");
//		z += 2;
//	}
//	return 0;
//}

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

#include <stdio.h>
int a = 0;
int b = 5;
int c = 2;
int d = 1;

int main() {
	for (int x = 1; x <= c; x++) {
		printf(" ");
	}
	for (int x = 1; x <= d; x++) {
		printf("*");
	}
	printf("\n");
	c--;
	d += 2;

	for (int x = 1; x <= c; x++) {
		printf(" ");
	}
	for (int x = 1; x <= d; x++) {
		printf("*");
	}
	printf("\n");
	c--;
	d += 2;

	for (int x = 1; x <= c; x++) {
		printf(" ");
	}
	for (int x = 1; x <= d; x++) {
		printf("*");
	}
	printf("\n");
	

	for (int x = 1; x <= a; x++) {
		printf(" ");
	}
	for (int x = 1; x <= b; x++) {
		printf("*");
	}
	printf("\n");
	a++;
	b -= 2;

	for (int x = 1; x <= a; x++) {
		printf(" ");
	}
	for (int x = 1; x <= b; x++) {
		printf("*");
	}
	printf("\n");
	a++;
	b -= 2;

	for (int x = 1; x <= a; x++) {
		printf(" ");
	}
	for (int x = 1; x <= b; x++) {
		printf("*");
	}
}

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
//    for (int blank = 0; blank < 3; blank++) printf(" ");
//    printf("1\n");
//
//    for (int blank = 0; blank < 2; blank++) printf(" ");
//    printf("22\n");
//
//    for (int blank = 0; blank < 1; blank++) printf(" ");
//    printf("333\n");
//
//    printf("4444\n");
//    return 0;
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