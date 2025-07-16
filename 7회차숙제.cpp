//5-9
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{ 
	int a;
	
	printf("1~4¡ﬂø° º±≈√«œººø‰:");
	scanf("%d", &a);
	
	switch (a) {
	case 1:
		printf("1¿ª º±≈√«ﬂ¥Ÿ.\n");
		break;
	case 2:
		printf("2¿ª º±≈√«ﬂ¥Ÿ.\n");
		break;
	case 3:
		printf("3¿ª º±≈√«ﬂ¥Ÿ.\n");
		break;
	case 4:
		printf("4¿ª º±≈√«ﬂ¥Ÿ.\n");
		break;
	default:
		printf("¿ÃªÛ«— ∞… º±≈√«ﬂ¥Ÿ.\n");
	}
}



//5-10
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{ 
	int year;
	
	printf("√‚ª˝ø¨µµ∏¶ ¿‘∑¬«œººø‰:");
	scanf("%d", &year);
	
	switch (year%12) {
	case 0:
		printf("ø¯º˛¿Ã∂Ï\n");
		break;
	case 1:
		printf("¥ﬂ∂Ï\n");
		break;
	case 2:
		printf("∞≥∂Ï\n");
		break;
	case 3:
		printf("µ≈¡ˆ∂Ï\n");
		break;
	case 4:
		printf("¡„∂Ï\n");
		break;
	case 5:
		printf("º“∂Ï\n");
		break;
	case 6:
		printf("»£∂˚¿Ã∂Ï\n");
		break;
	case 7:
		printf("≈‰≥¢∂Ï\n");
		break;
	case 8:
		printf("øÎ∂Ï\n");
		break;
	case 9:
		printf("πÏ∂Ï\n");
		break;
	case 10:
		printf("∏ª∂Ï\n");
		break;
	case 11:
		printf("æÁ∂Ï\n");
	}
}