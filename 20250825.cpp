/*----------����----------*/

//#include <stdio.h>
//
//int main() {
//	int i;
//	for (i = 0; i < 3; i++)
//		printf("IT ");
//		printf("CookBook ");
//}

//#include <stdio.h>
//
//int main() {
//	int hap = 0;
//	int i;
//
//	for (i = 300; i <= 900; i+=2) {
//		hap += i;
//	}
//	printf(" 300���� 900������ ¦���� ��: %d \n", hap);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int i;
//	int hap = 0;
//
//	for (i = 1; i <= 1000; i++) {
//		if (i % 3 == 0 || i % 7 == 0) {
//			hap += i;
//		}
//	}
//	printf("3�� ��� �Ǵ� 7�� ����� ��: %d\n", hap);
//	return 0;
//}

/*----------����----------*/

//#include <stdio.h>
//
//int main() {
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++) {
//		printf("%d��° ���� �ݺ��� ���� \n", outer);
//
//		//���� for �� �տ� ���� �ڵ�� �� ���� ����
//		for (inter = 0; inter < 5; inter++) {
//			printf("���� �ݺ��� %d�� �ݺ�\n", inter);
//		}
//
//		//���� for�� �տ� ���� �ڵ�� �� �Ŀ� ����
//		printf("%d��° ���� �ݺ��� Ż��\n\n", outer);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter = 0; inter < 5; inter++) {
//			printf("*");
//		}
//		//���� �ݺ��� �ݺ��ø��� * ����
//		//���� for �� �ڿ� ���� �ڵ�� ���� for�� �ݺ� ������ ����
//		printf("\n");//�ٱ��ݺ��� �ݺ��ø��� �ٹٲ�
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter = 0; inter < outer + 1; inter++) {
//			printf("*");
//			//���� �ݺ����� ���ǹ����� �ܺ� �ݺ����� outer ���
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int outer, inter1, inter2;
//	for (outer = 0; outer < 5; outer++) {
//		//�ݺ��Ͽ� ' '(�����̽� Ű) ���
//		for (inter1 = 0; inter1 < 5 - outer; inter1++) {
//			printf(" ");
//		}
//		//�ݺ��� �ȿ� ���� ���� for �� ���
//		for (inter2 = 0; inter2 < outer + 1; inter2++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int outer, inter1, inter2;
//	for (outer = 0; outer < 5; outer++) {
//		//�ݺ��Ͽ� ' '(�����̽� Ű) ���
//		for (inter1 = 0; inter1 < 5 - outer; inter1++) {
//			printf(" ");
//		}
//		//�ʱ�ȭ�κп� �ٱ� for���� ���� ���
//		for (inter2 = 0; inter2 < outer + 1; inter2++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include <stdio.h>

int main() {
	int LINE = 4;
	/*scanf("%d", &LINE);*/

	for (int y = LINE; y >= 1; y--) {
		for (int x = 1; x <= y; x++) {
			printf("*");
		}
		printf("\n");
	}
}