//#include <stdio.h>
//
//int main() {
//	int num;
//	for (num = 11; num <= 200; num+=11) {
//		printf("%d\n", num);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	float sqLine;
//	for (sqLine = 0.1; sqLine * 4 <= 21; sqLine += 0.1) {
//		printf("%.1f\n", sqLine);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	printf("1반 1번\n");
//	printf("1반 2번\n");
//	printf("1반 3번\n");
//	printf("2반 1번\n");
//	printf("2반 2번\n");
//	printf("2반 3번\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int myClass = 1;
//	int student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//
//	myClass++; student = 1;//학번 초기화
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int myClass = 1;
//	int student;
//	for (student = 1; student <= 3; student++) {
//		printf("%d반 %d번\n", myClass, student);
//	}
//	//student++는 for문 ()안에 있음
//
//	myClass++; //초기화는 for문 ()안에 있음
//	for (student = 1; student <= 3; student++) {
//		printf("%d반 %d번 \n", myClass, student);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 2; myClass++) {
//
//		//myClass++는 바깥 for문 ()안에 있음
//		for (student = 1; student <= 3; student++) {
//			printf("%d반 %d번 \n", myClass, student);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 8; myClass++) {
//		for (student = 1; student <= 30; student++) {
//			printf("%d반 %d번\n", myClass, student);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int grade;
//	int myClass;
//	int student;
//	for (grade = 1; grade <= 8; grade++) {
//		for (myClass = 1; myClass <= 8; myClass++) {
//			for (student = 1; student <= 30; student++) {
//				printf("%d학년 %d반 %d번 \n", grade, myClass, student);
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int first;
//	int second;
//	for (first = 2; first <= 9; first++) {
//		for (second = 1; second <= 9; second++) {
//			printf("%d x %d = %d\n", first, second, first * second);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int first;
//	int second;
//	for (first = 2; first <= 9; first++) {
//		if (first == 3) continue;
//		for (second = 1; second <= 9; second++) {
//			printf("%d x %d = %d\n", first, second, first * second);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int four_sided_dice;
//	int six_sided_dice;
//	for (four_sided_dice = 1; four_sided_dice <= 4; four_sided_dice++) {
//		for (six_sided_dice = 1; six_sided_dice <= 6; six_sided_dice++) {
//			printf("4면 - %d, 6면 - %d\n", four_sided_dice, six_sided_dice);
//		}
//	}
//	return 0;
//}