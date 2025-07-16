//#include <stdio.h>
//
//int main() {
//	char command = 'i';
//
//	switch (command) {
//	case'i':
//		printf("아이템창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char command = 'i';
//	switch (command) {
//	case'i':
//		printf("아이템창 오픈\n");
//	case'm':
//		printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char command = 'm';
//	switch (command) {
//	case'i': printf("아이템창 오픈\n");
//	case'm': printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char command = 'm';
//	switch (command) {
//	case'i': printf("아이템창 오픈\n");
//		break;
//	case'm': printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char command;
//	printf("커맨드를 입력하세요:");
//	scanf("%c", &command);
//	switch (command) {
//	case'i': printf("아이템창 오픈\n");
//		break;//break로 멈춤
//	case'm': printf("지도창 오픈\n");
//		break;
//	default: printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char number = 1;
//	switch (number) {
//	case 1: printf("one\n"); break;
//	case 2: printf("two\n"); break;
//	case 3: printf("three\n"); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int input1;
//	int input2;
//	char oper;
//	printf("숫자1:");
//	scanf("%d", &input1);
//	printf("숫자2:");
//	scanf("%d", &input2);
//	printf("기호:");
//	scanf(" %c", &oper);
//	switch (oper)
//	{
//	case'+': printf("%d", input1 + input2); break;
//	case'-': printf("%d", input1 - input2); break;
//	case'*': printf("%d", input1 * input2); break;
//	case'/': printf("%d", input1 / input2); break;
//	case'%': printf("%d", input1 % input2); break;
//	default: break;
//	}
// return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int month;
//	printf("숫자:");
//	scanf("%d", &month);
//	switch (month) {
//	case 1: printf("%d > January", month); break;
//	case 2: printf("%d > February", month); break;
//	case 3: printf("%d > March", month); break;
//	case 4: printf("%d > April", month); break;
//	case 5: printf("%d > May", month); break;
//	case 6: printf("%d > June", month); break;
//	case 7: printf("%d > July", month); break;
//	case 8: printf("%d > August", month); break;
//	case 9: printf("%d > September", month); break;
//	case 10: printf("%d > October", month); break;
//	case 11: printf("%d > November", month); break;
//	case 12: printf("%d > December", month); break;
//	default: break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char command;
//
//	printf("<, a 왼쪽 이동 \n");
//	printf(">, d 오른쪽 이동 \n");
//	scanf("%c", &command);
//	switch (command) {
//	case '<':
//	case 'a':
//		//case를 여러개 써서 같은코드 실행가능
//		printf("왼쪽으로 이동합니다.\n");
//		break;
//	case'>': case'd':
//		printf("오른쪽으로 이동합니다.\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int input;
//	int number;
//	const int option = 3;
//
//	printf("메뉴를 선택하세요");
//	printf("1.새 게임 2.이어하기 3.옵션\n");
//
//	scanf("%d", &input);
//
//	switch (input) {
//	case 1:
//		printf("새 게임 시작.\n");
//		break;
//	case 2:
//		printf("세이브 데이터 로드.\n");
//		break;
//	case option:
//		printf("옵션 세팅.\n");
//		break;
//	default:
//		printf("지정된 기능이 없습니다.\n");
//
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int number;
//
//	scanf("%d", &number);
//
//	if (number >= 0 && number <= 9) {
//		switch (number) {
//		case 3: case 6: case 9: printf("짝"); break;
//		default: printf("지정된 기능이 없습니다."); break;
//		}
//	}		
//}

//#include <stdio.h>
//
//int main() {
//	char command = 'x';
//
//	switch (command) {
//	case 'x': printf("알파벳 x 입력.\n"); break;
//	case 'X': printf("엑스표 입력.\n"); break;
//	}
//
//	return 0;
//}

#include <stdio.h>

int main() {
	int i_menu;

	printf("1.더하기 2.빼기\n");
	scanf("%d", &i_menu);

	switch (i_menu)
	{
	case 1: {
		int number1, number2;
		printf("숫자 두 개를 입력하세요\n");
		scanf("%d%d", &number1, &number2);
		printf("%d+%d=%d\n", number1, number2, number1 + number2);
	}
		  break;
	case 2: {
		int number3, number4;
		printf("숫자 두 개를 입력하세요\n");
		scanf("%d%d", &number3, &number4);
		printf("%d-%d=%d\n", number3, number4, number3 - number4);
	}
		  break;
	}
	return 0;
}