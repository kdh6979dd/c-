//���� 5
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

//���� 6

#include <stdio.h>

int main() {
	int num;
	int total = 0, temp = 0, sequence = 0;

	while (1) {
		if (sequence == 0) {
			printf("A : ");
			sequence = 1; //���� �����ϸ� x
		}
		else if (sequence == 1) {
			printf("B : ");
			sequence = 0; // ���� �����ϸ� x
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
		printf("A�� �̰���ϴ�!");
	}
	else if (sequence == 1) {
		printf("B�� �̰���ϴ�!");
	}
	return 0;
}

//����6:
//1.num1�� num2 ����
//2.sequence
// 
//����5 :
//�ݺ��� �ϳ���