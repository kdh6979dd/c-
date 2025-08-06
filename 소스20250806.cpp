//30p 문제 6

//#include <stdio.h>
//
//int main() {
//	int num;
//	int total = 0, temp = 0, sequence = 0;
//
//	while (1) {
//		printf("%c : ", 'A' + sequence);
//		scanf("%d", &num);
//		printf("=> ");
//
//		if (num < 0 || num > 3) {
//			printf("0~3사이의 숫자를 입력하세요\n");
//			continue;
//		}
//		temp = num;
//		total += temp;
//		printf("%d\n", total);
//
//		sequence = !sequence; //1번
//		//sequence = ++sequence % 2; //2번
//
//		if (total >= 31) {
//			break;
//		}
//	}
//	printf("%c가 이겼습니다!", 'A' + sequence);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int temperature = 20;
//	do
//	{
//		printf("현재 온도 : %d도\n", temperature);
//		temperature--;
//	} while (temperature > 28);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int input;
//	enum {GAMEOVER, NEWGAME, LOADGAME, OPTION};
//	do {
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.새 게임 2.이어하기 3.옵션(0:게임종료)\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case NEWGAME:
//			printf("새 게임 시작\n");
//			break;
//		case LOADGAME:
//			printf("세이브 데이터 로드\n");
//			break;
//		case OPTION:
//			printf("옵션 세팅\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//	printf("게임을 종료합니다.\n");
//	return 0;
//}

#include <stdio.h>

int main() {
	int select;
	int id, password;
	enum { TEMP, SIGNIN, SIGNUP, OPTION, DEV };
	do {
		printf("\n메뉴를 선택하세요.\n");
		printf("1. 로그인\n2. 회원가입\n3. 옵션(0:게임종료)\n4. 만든 사람들\n\n");
		printf("=>");
		scanf("%d", &select);
		printf("\n");

		switch (select) {
		case SIGNIN:
			printf("아이디 : ");
			scanf("%d", &id);
			printf("비밀번호 : ");
			scanf("%d", &password);
			break;
		case SIGNUP:
			printf("아이디 : ");
			scanf("%d", &id);
			printf("비밀번호 : ");
			scanf("%d", &password);
			break;
		case OPTION:
			printf("옵션 세팅\n");
			break;
		case DEV:
			printf("만든 사람들 : A\n만든 사람들 : B\n만든 사람들 : C\n");
			break;
		}
	}
	while (select != (select >= 1 && select <= 4));
	printf("게임을 종료합니다.\n");
	return 0;
}