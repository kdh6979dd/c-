// ���� 8�� ���� 
//#include <stdio.h>
//
//int main() {
//	int num;
//	int i = 0;
//	int square = 1;
//	scanf("%d", &num);
//	int ori = num;
//	while (num > 0) {
//		square *= 10;
//		num /= 10;
//		i++;
//	}
//	square /= 10;
//	//printf("%d\n", square);
//	while (square > 0) {
//		int verticalnumber = ori / square; //���ڸ� ���� ����
//		ori %= square; //ori = 3721 % 1000 = 721 
//		square /= 10; //�ڸ��� ���߱�
//		//printf("%d\n", verticalnumber);
//		int count = 0;
//		while (count < verticalnumber) {
//			printf("\u2665\u2665");
//			count++;
//		}
//		printf("\n");
//	}
//}

//----------------------------------------------------------

//#include <stdio.h>
//
//int main() 
//{
//	int count = 0;
//
//	while (count < 3) //count �� 0,1,2 �� �� ����
//
//	{
//		printf("���� count : %d\n", count);
//		printf("count�� 3���� ���� ���� �ݺ�\n");
//		count++;
//
//	//count�� �������� ������ �������� ���ϰ� ��
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count = 3; //count�� 3,2,1�� �� ����
//
//	while (count > 0) {
//		printf("���� count : %d\n", count);
//		printf("count�� 0���� ū ���� �ݺ�\n");
//		count--;
//
//		// count�� ���ҽ��� ���Ŵ� �������� ���ϰ� ��
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int count = 6;
//
//	while (count > 0) {
//		printf("'C'");
//		count--;					
//	}
//}
//
//#include <stdio.h>
//
//int main() {
//	int count = -10;
//
//	while (count<=0) {
//		printf("%d\n", count);
//		count++;
//	}
//}
//
//#include <stdio.h>
//
//int main() {
//	int count = 0;
//
//	while (count <= 100) {
//		if (count % 5 == 0) {
//			printf("%d\n", count);
//		}
//		count++;
//	}
//}

//#include <stdio.h>
//
//int main() {
//	int count = 3;
//	while (count) //count�� 0�� �� �ݺ����� ����
//	{
//		if (count == 1) {
//			//count�� 1�̸� {}����
//			break;
//		}
//		printf("���� count: %d\n", count);
//		printf("count�� 0�� �ƴϸ� �ݺ�\n");
//		count--;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char alphabat;
//	while (1) { //���ѹݺ�
//		printf("���ĺ��� �Է����ּ���(�ٸ� �� �Է½� �ٽ��Է�):");
//		scanf("%c", &alphabat);
//		if (alphabat >= 'a' && alphabat <= 'z') {
//			printf("�ҹ��ڸ� �Է��ϼ̽��ϴ�.\n");
//		}
//		else if (alphabat >= 'A' && alphabat <= 'Z') {
//			printf("�빮�ڸ� �Է��ϼ̽��ϴ�.\n");
//		}
//		else {
//			continue;
//		}
//		printf("�Է��� ��: %c\n", alphabat);
//	}
//}

//#include <stdio.h>
//
//int main() {
//	int number, total = 0;
//	while (1) {
//		printf("����� �Է����ּ���(0�Է½� ����);");
//		scanf("%d", &number);
//		//number�� 0�̸� �ݺ��� Ż��
//		if (number == 0) {
//			break;
//		}
//		//number�� �����̸� �ٽ� �Է¹���
//		else if (number < 0) { continue; }
//
//		total = total + number;
//		printf("%d\n", total);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int number = 1;
//	int multi = 1;
//	while (1) {
//		multi *= number;
//		if (multi >= 50000) {
//			break;
//		}
//		number++;
//	}
//	printf("%d\n", number);
//	return 0;
//}

#include <stdio.h>

int main() {
	char alphabat;
	while (alphabat) {
		alphabat++;
		printf("%c\n", alphabat);
	}
}