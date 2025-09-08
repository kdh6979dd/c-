//#include  <stdio.h>
//
//int main() {
//	int person;
//	printf("<베스킨 라빈스 31!>\n");
//	printf("게임을 시작합니다! : 뒤에 숫자를 입력해주세요.\n");
//	for (;;) {
//		for (int x = 1; x <= 3; x++) {
//			if (x >= 1) {
//				printf("A : ");
//			}
//			if (x == 3) {
//				printf("B : ");
//			}
//			scanf("%d", &person);
//		}
//		printf("턴이 넘어갑니다.\n");
//	}
//}


/* 베스킨라빈스 1단계 */

//#include <stdio.h>
//
//int main() {
//	int num;
//	int total = 0, temp = 0, sequence = 0;
//	printf("<베스킨 라빈스 31!>\n");
//	printf("게임을 시작합니다! : 뒤에 숫자를 입력해주세요.\n");
//	for (;;) {
//		for (int x = 1; x <= 3; x++)
//		{
//			printf("%c => : ", 'A' + sequence);
//			scanf("%d", &num);
//		}
//
//		printf("턴이 넘어갑니다.\n");
//		//printf("%d\n", total);
//
//		sequence = !sequence; //스타일1
//		//sequence = ++sequence % 2; //스타일2
//
//		if (total >= 31) {
//			break;
//		}
//	}
//	printf("%c가 이겼습니다!", 'A' + sequence);
//	return 0;
//}

/* 베스킨라빈스 2단계 */

//#include <stdio.h>
//
//int main() {
//	int num;
//	int sequence = 0;
//	printf("            <베스킨 라빈스 31 !>\n");
//	printf("\n");
//	printf("게임을 시작합니다! : 뒤에 숫자를 입력해주세요.\n");
//	printf("31을 말하는 사람이 지게 됩니다.\n");
//	printf("\n");
//	for (;;) {
//		for (int x = 1; x <= 3; x++)
//		{
//			printf("%c => : ", 'A' + sequence);
//			scanf("%d", &num);
//			if (num >= 31) {
//				break;
//			}
//		}
//		if (num >= 31) {
//			sequence = !sequence;
//			break;
//		}
//		sequence = !sequence;
//		printf("턴이 넘어갑니다.\n");
//	}
//	printf("유저 %c의 승리입니다!", 'A' + sequence);
//	return 0;
//}

/* 베스킨라빈스 3단계 */

//#include <stdio.h>
//
//int main() {
//	int num;
//	int sequence = 0;
//	printf("            <베스킨 라빈스 31 !>\n");
//	printf("\n");
//	printf("게임을 시작합니다! : 뒤에 숫자를 입력해주세요.\n");
//	printf("31을 말하는 사람이 지게 됩니다.\n");
//	printf("\n");
//	for (;;) {
//		for (int x = 1; x <= 3; x++)
//		{
//			printf("지금 입력해야하는 값은 %d입니다.\n", x);
//			printf("%c => : ", 'A' + sequence);
//			scanf("%d", &num);
//			if (num >= 31) {
//				break;
//			}
//		}
//		if (num >= 31) {
//			sequence = !sequence;
//			break;
//		}
//		sequence = !sequence;
//		printf("턴이 넘어갑니다.\n");
//	}
//	printf("유저 %c의 승리입니다!", 'A' + sequence);
//	return 0;
//}

/* 베스킨라빈스 4단계 */

//#include <stdio.h>
//
//int main() {
//	int num;
//	int sequence = 0;
//	printf("            <베스킨 라빈스 31 !>\n");
//	printf("\n");
//	printf("게임을 시작합니다! : 뒤에 숫자를 입력해주세요.\n");
//	printf("31을 말하는 사람이 지게 됩니다.\n");
//	printf("\n");
//	for (;;) {
//		for (int x = 1; x <= 3; x++)
//		{
//			printf("%c => : ", 'A' + sequence);
//			scanf("%d", &num);
//			if (num > 3) {
//				printf("잘못된 입력입니다.\n");
//				printf("지금 입력해야하는 값은 %d입니다.\n", x);
//			}
//			
//			if (num >= 31) {
//				break;
//			}
//		}
//		if (num >= 31) {
//			sequence = !sequence;
//			break;
//		}
//		sequence = !sequence;
//		printf("턴이 넘어갑니다.\n");
//	}
//	printf("유저 %c의 승리입니다!", 'A' + sequence);
//	return 0;
//}

/* 베스킨라빈스 4단계 */

#include <stdio.h>

int main() {
	int num;
	int sequence = 0;
	printf("            <베스킨 라빈스 31 !>\n");
	printf("\n");
	printf("게임을 시작합니다! : 뒤에 숫자를 입력해주세요.\n");
	printf("31을 말하는 사람이 지게 됩니다. (0 입력시 턴넘김)\n");
	printf("\n");
	for (;;) {
		for (int x = 1; x <= 3; x++)
		{
			printf("%c => : ", 'A' + sequence);
			scanf("%d", &num);
			
			if (num >= 31) break;

			if (num != y) {
				printf("잘못된 입력입니다.\n");
				printf("지금 입력해야하는 값은 %d입니다.\n", y);
				printf("\n");
				continue;
			}
			
			/*if (num == 0) {
				continue;
			}*/
		}
		sequence = !sequence;

		if (num >= 31) break;

		printf("턴이 넘어갑니다.\n");
		printf("\n");
	}
	printf("유저 %c의 승리입니다!", 'A' + sequence);
	return 0;
}