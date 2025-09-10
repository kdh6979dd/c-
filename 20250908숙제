/* 베스킨라빈스 4단계 */

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

			if (num >= 31) break;

			if (num != expect) {
				printf("잘못된 입력입니다.\n");
				printf("지금 입력해야하는 값은 %d입니다.\n", expect);
				printf("\n");
				continue;
			}
			expect++;
		}
		sequence = !sequence;
		

		printf("턴이 넘어갑니다.\n");
		printf("\n");
	}
	printf("유저 %c의 승리입니다!", 'A' + sequence);
	return 0;
}
