//#include <stdio.h>
//
//int main() {
//	int input;
//	scanf("%d", &input);
//	if (input > 0)
//		printf("%d은(는) 양수\n", input);
//	else if (input < 0)
//		printf("%d은(는) 음수\n", input);
//	else
//		printf("%d은(는) 0\n", input);
//}

//#include <stdio.h>
//
//int main() {
//	int input = 0;
//	scanf("%d", &input);
//	if (input >= 10 && input <= 99)
//		printf("%d은(는) 두 자리 숫자입니다", input);
//	else
//		printf("%d은(는) 두 자리 숫자가 아닙니다", input);
//}

//#include <stdio.h>
//
//int main() {
//	int height = 170;
//	if (height > 150) {
//		printf("키가 150 이상입니다.\n");
//	}
//	if (height > 160) {
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int height = 170;
//	if (height > 150) {
//		printf("키가 150 이상입니다.\n");
//	}
//	else if (height > 160) {
//		//else if는 if가 틀렸을때만 실행된다
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int y_age;
//	scanf("%d", &y_age);
//	printf("전체관람가\n");
//	if (y_age >= 12)
//	{
//		printf("12세 관람가\n");
//	}
//	if (y_age >= 15)
//	{
//		printf("15세 관람가\n");
//	}
//}

//#include <stdio.h>
//
//int main() {
//	char initial;
//	scanf("%c", &initial);
//	if (initial >='A' && initial <= 0x5a) //'A' = 0x41= 65
//		printf("대문자");
//	else if (initial >= 0x61 && initial <= 0x7a)
//		printf("소문자");
//}

//#include <stdio.h>
//
//int main() {
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else {
//		if (number < answer) {
//			printf("숫자2가 숫자1보다 큽니다.\n");
//		}
//		else {
//			printf("숫자1과 숫자2가 같습니다.\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int number, answer;
//	scanf("%d%d", &number, &answer);
//	if (number > answer) {
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else if (number < answer) {
//		printf("숫자2가 숫자1보다 큽니다.\n");
//	}
//	else {
//		printf("숫자1과 숫자2가 같습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int score = 75;
//	if (score > 90) {
//		printf("성적은 A등급입니다.\n");
//	}
//	else if (score > 80) {
//		printf("성적은 B등급입니다.\n");
//	}
//	else if (score > 70) {
//		printf("성적은 C등급입니다.\n");
//	}
//	else if (score > 60) {
//		printf("성적은 D등급입니다.\n");
//	}
//	else {
//		printf("성적은 F등급입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int number = -11;
//	if (number > 0) {
//		printf("number는 양수입니다.\n");
//	}
//	else if (number < 0) {
//		printf("number는 음수입니다.\n");
//	}
//	else {
//		printf("number는 0입니다.\n");
//	}
//	if (number % 2 == 0) {
//		printf("number는 짝수입니다.\n");
//	}
//	else {
//		printf("number는 홀수입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char arrowkey;
//	scanf("%c", &arrowkey);
//	if (arrowkey == 'w') {
//		printf("위 방향키를 입력하셨습니다.\n");
//	}
//	else if (arrowkey == 'a') {
//		printf("좌 방향키를 입력하셨습니다.\n");
//	}
//	else if (arrowkey == 's') {
//		printf("아래 방향키를 입력하셨습니다.\n");
//	}
//	else if (arrowkey == 'd') {
//		printf("우 방향키를 입력하셨습니다.\n");
//	}
//}

//#include <stdio.h>
//
//int main() {
//	int gauge;
//	scanf("%d", &gauge);
//	if (gauge >= 45 && gauge <= 55) {
//		printf("Perfect");
//	}
//	else if (gauge >= 35 && gauge <= 65) {
//		printf("Excellent");
//	}
//	else {
//		printf("good");
//	}
//}

//#include <stdio.h>
//
//int main() {
//	int input;
//	scanf("%d", &input);
//
//	if (input % 3 == 0) { // 중첩 if 사용가능
//		printf("%d은(는) 3의 배수입니다. ", input);
//		if (input % 6 == 0) {
//			printf("%d은(는) 6의 배수입니다. ", input);
//		}
//		if (input % 9 == 0) {
//			printf("%d은(는) 9의 배수입니다. ", input);
//		}
//	}
//	return 0;
//}