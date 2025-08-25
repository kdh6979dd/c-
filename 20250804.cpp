//문제 5
//
//#include <stdio.h>
//
//int main() {
//	char alphabat = 'A';
//	while (alphabat <= 'Z') {
//		if (alphabat != 'F') 
//			printf("%c\n", alphabat);
//		alphabat++;
//	}
//	return 0;
//}

//문제 6

#include <stdio.h>

int main() {
	int num;
	int total = 0, temp = 0, sequence = 0;

	while (1) {
		if (sequence == 0) {
			printf("A : ");
			sequence = 1; //지금 변경하면 x
		}
		else if (sequence == 1) {
			printf("B : ");
			sequence = 0; // 지금 변경하면 x
		}
		scanf("%d", &num);
		printf("=> ");


		if (num > 0) {
			temp = num;
			total += temp;
			printf("%d\n", total);
			if (total >= 31) {
				break;
			}
		}
		else {
			break;
		}
	}
	if (sequence == 0) {
		printf("A가 이겼습니다!");
	}
	else if (sequence == 1) {
		printf("B가 이겼습니다!");
	}
	return 0;
}

//문제6:
//1.num1과 num2 통일
//2.sequence
// 
//문제5 :
//반복문 하나로
