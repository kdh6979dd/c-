/* 베스킨라빈스 4단계 (성공) */

//#include <stdio.h>
//
//int main() {
//	int num;
//	int sequence = 0;
//	int expect = 1;
//	printf("            <베스킨 라빈스 31 !>\n");
//	printf("\n");
//	printf("게임을 시작합니다! : 뒤에 숫자를 입력해주세요.\n");
//	printf("31을 말하는 사람이 지게 됩니다. (0 입력시 턴넘김)\n");
//	printf("\n");
//	for (;;) {
//		for (int x = 1; x <= 3; x++)
//		{
//			printf("%c => : ", 'A' + sequence);
//			scanf("%d", &num);
//
//			if (num != expect) {
//				printf("\n");
//				printf("잘못된 입력입니다.\n");
//				printf("지금 입력해야하는 값은 %d입니다.\n", expect);
//				printf("\n");
//				x--;
//				continue;
//			}
//			expect++;
//		}
//		sequence = !sequence;
//		printf("턴이 넘어갑니다.\n");
//		printf("\n");
//	}
//	printf("유저 %c의 승리입니다!", 'A' + sequence);
//	return 0;
//}

/* 베스킨라빈스 5단계 */

#include <stdio.h>

int main() {
	int num;
	int sequence = 0;
	int expect = 1;
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
		
			if (num == 0 && x == 1) {
				printf("턴을 넘기기 위해서는 하나 이상의 수를 말해야 합니다.\n");
				x -= 1;
				continue;
			}
			
			
			if (num == 0 && x > 1) {
				break;
			}

			if (num != expect) {
				printf("\n");
				printf("잘못된 입력입니다.\n");
				printf("지금 입력해야하는 값은 %d입니다.\n", expect);
				printf("\n");
				x--;
				continue;
			}
			if (num == 31){
				break;
			}


			expect++;
		}
		sequence = !sequence;
		if (num == 31) {
			break;
		}
		printf("턴이 넘어갑니다.\n");
		printf("\n");
	}
	printf("유저 %c의 승리입니다!", 'A' + sequence);
	return 0;
}