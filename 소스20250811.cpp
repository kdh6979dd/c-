//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main() {
//	srand(unsigned int(time(NULL)));
//	int command;
//	int day = 0;
//	int study = 0;
//	int sleep = 0;
//	int movie = 0;
//	int spaceout = 0;
//	do {
//		printf("\n%d번째 날 !\n", ++day);
//		printf("오늘도 코딩할까요?\n");
//		printf("1.공부한다.\n");
//		printf("2.잠을 잔다.\n");
//		printf("3.영화를 본다.\n");
//		printf("4.멍때린다.\n");
//		printf("그 외. 끝낸다.\n >>");
//		scanf("%d", &command);
//		if (command > 4) {
//			break;
//		}
//		else if (command == 1) {
//			int randint = rand() % 5 + 1;
//
//			switch (randint) {
//				break;
//			case 1:
//				printf("기분이 좋네요.\n");
//			case 3:
//				printf("도서관에서 ");
//				break;
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 4:
//				printf("카페에서 ");
//				break;
//			case 5:
//				printf("학원에서 ");
//				break;
//			}
//			printf("코딩 공부합니다.\n");
//			study++;
//		}
//		else if (command == 2) {
//			int randint = rand() % 5 + 1;
//
//			switch (randint) {
//				break;
//			case 1:
//				printf("기분이 좋네요.\n");
//			case 3:
//				printf("도서관에서 ");
//				break;
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 4:
//				printf("카페에서 ");
//				break;
//			case 5:
//				printf("학원에서 ");
//				break;
//			}
//			printf("잠을 잡니다.\n");
//			sleep++;
//		}
//		else if (command == 3) {
//			int randint = rand() % 5 + 1;
//
//			switch (randint) {
//				break;
//			case 1:
//				printf("기분이 좋네요.\n");
//			case 3:
//				printf("도서관에서 ");
//				break;
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 4:
//				printf("카페에서 ");
//				break;
//			case 5:
//				printf("학원에서 ");
//				break;
//			}
//			printf("영화를 봅니다.\n");
//			movie++;
//		}
//		else {
//			int randint = rand() % 5 + 1;
//
//			switch (randint) {
//				break;
//			case 1:
//				printf("기분이 좋네요.\n");
//			case 3:
//				printf("도서관에서 ");
//				break;
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 4:
//				printf("카페에서 ");
//				break;
//			case 5:
//				printf("학원에서 ");
//				break;
//			}
//			printf("멍때립니다.\n");
//			spaceout++;
//		}
//	} while (1);
//	if (day <= 3) {
//		printf("그대로입니다...\n");
//	}
//	else {
//		int positive_level = study / 8;
//		int sleep_level = sleep / 8;
//		int movie_level = movie / 8;
//		int spaceout_level = spaceout / 8;
//
//		if ((study >= sleep)&& (study >= movie)&& (study >= spaceout)) {
//			switch (positive_level) {
//			case 0:
//				printf("코딩새싹이 되었습니다.!\n");
//				break;
//			case 1:
//				printf("프로그래머가 되었습니다.!\n");
//				break;
//			case 2:
//				printf("Frontend 개발자가 되었습니다.!\n");
//				break;
//			case 3:
//				printf("Backend 개발자가 되었습니다.!\n");
//				break;
//			default:
//				printf("풀스택 개발자가 되었습니다.!\n");
//				break;
//			}
//		}
//		else if ((sleep >= movie) && (sleep >= spaceout)&& (sleep >= study)) {
//			switch (sleep_level) {
//			case 0:
//				printf("영양제를 먹어야 할까요?..\n");
//				break;
//			case 1:
//				printf("잠을 너무 많이 자버린 것 같습니다..\n");
//				break;
//			default:
//				printf("깊은 잠에 빠졌습니다..\n");
//				break;
//			}
//		}
//		else if ((movie >= sleep) && (movie >= spaceout)&& (movie >= study)) {
//			switch (movie_level) {
//			case 0:
//				printf("눈이 아프도록 영화를 봤네요..\n");
//				break;
//			case 1:
//				printf("영화를 너무 많이 본 것 같습니다..\n");
//				break;
//			default:
//				printf("영화평론가가 되었습니다.!\n");
//				break;
//			}
//		}
//		else {
//			switch (spaceout_level) {
//			case 0:
//				printf("멍 좀 그만 때립시다..\n");
//				break;
//			case 1:
//				printf("멍을 너무 많이 때린 것 같습니다..\n");
//				break;
//			default:
//				printf("다른 분야를 알아봅시다..\n");
//				break;
//			}
//		}
//	}
//	return 0;
//}