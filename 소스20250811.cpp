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
//		printf("\n%d��° �� !\n", ++day);
//		printf("���õ� �ڵ��ұ��?\n");
//		printf("1.�����Ѵ�.\n");
//		printf("2.���� �ܴ�.\n");
//		printf("3.��ȭ�� ����.\n");
//		printf("4.�۶�����.\n");
//		printf("�� ��. ������.\n >>");
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
//				printf("����� ���׿�.\n");
//			case 3:
//				printf("���������� ");
//				break;
//			case 2:
//				printf("����� ������.\n");
//			case 4:
//				printf("ī�信�� ");
//				break;
//			case 5:
//				printf("�п����� ");
//				break;
//			}
//			printf("�ڵ� �����մϴ�.\n");
//			study++;
//		}
//		else if (command == 2) {
//			int randint = rand() % 5 + 1;
//
//			switch (randint) {
//				break;
//			case 1:
//				printf("����� ���׿�.\n");
//			case 3:
//				printf("���������� ");
//				break;
//			case 2:
//				printf("����� ������.\n");
//			case 4:
//				printf("ī�信�� ");
//				break;
//			case 5:
//				printf("�п����� ");
//				break;
//			}
//			printf("���� ��ϴ�.\n");
//			sleep++;
//		}
//		else if (command == 3) {
//			int randint = rand() % 5 + 1;
//
//			switch (randint) {
//				break;
//			case 1:
//				printf("����� ���׿�.\n");
//			case 3:
//				printf("���������� ");
//				break;
//			case 2:
//				printf("����� ������.\n");
//			case 4:
//				printf("ī�信�� ");
//				break;
//			case 5:
//				printf("�п����� ");
//				break;
//			}
//			printf("��ȭ�� ���ϴ�.\n");
//			movie++;
//		}
//		else {
//			int randint = rand() % 5 + 1;
//
//			switch (randint) {
//				break;
//			case 1:
//				printf("����� ���׿�.\n");
//			case 3:
//				printf("���������� ");
//				break;
//			case 2:
//				printf("����� ������.\n");
//			case 4:
//				printf("ī�信�� ");
//				break;
//			case 5:
//				printf("�п����� ");
//				break;
//			}
//			printf("�۶����ϴ�.\n");
//			spaceout++;
//		}
//	} while (1);
//	if (day <= 3) {
//		printf("�״���Դϴ�...\n");
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
//				printf("�ڵ������� �Ǿ����ϴ�.!\n");
//				break;
//			case 1:
//				printf("���α׷��Ӱ� �Ǿ����ϴ�.!\n");
//				break;
//			case 2:
//				printf("Frontend �����ڰ� �Ǿ����ϴ�.!\n");
//				break;
//			case 3:
//				printf("Backend �����ڰ� �Ǿ����ϴ�.!\n");
//				break;
//			default:
//				printf("Ǯ���� �����ڰ� �Ǿ����ϴ�.!\n");
//				break;
//			}
//		}
//		else if ((sleep >= movie) && (sleep >= spaceout)&& (sleep >= study)) {
//			switch (sleep_level) {
//			case 0:
//				printf("�������� �Ծ�� �ұ��?..\n");
//				break;
//			case 1:
//				printf("���� �ʹ� ���� �ڹ��� �� �����ϴ�..\n");
//				break;
//			default:
//				printf("���� �ῡ �������ϴ�..\n");
//				break;
//			}
//		}
//		else if ((movie >= sleep) && (movie >= spaceout)&& (movie >= study)) {
//			switch (movie_level) {
//			case 0:
//				printf("���� �������� ��ȭ�� �ó׿�..\n");
//				break;
//			case 1:
//				printf("��ȭ�� �ʹ� ���� �� �� �����ϴ�..\n");
//				break;
//			default:
//				printf("��ȭ��а��� �Ǿ����ϴ�.!\n");
//				break;
//			}
//		}
//		else {
//			switch (spaceout_level) {
//			case 0:
//				printf("�� �� �׸� �����ô�..\n");
//				break;
//			case 1:
//				printf("���� �ʹ� ���� ���� �� �����ϴ�..\n");
//				break;
//			default:
//				printf("�ٸ� �о߸� �˾ƺ��ô�..\n");
//				break;
//			}
//		}
//	}
//	return 0;
//}