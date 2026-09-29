#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define D 2.54
#define ED 2.32166
#define SD 2.7076

void main() {
	setlocale(LC_CTYPE, "RUS");

	int dym;
	float resultD, resultED, resultSD;

	printf("¬ведите число целых дюймов -> ");
	scanf("%d", &dym);

	resultD = D * dym;
	resultED = ED * dym;
	resultSD = SD * dym;

	printf("%d дюймов - это %.2f см\n", dym, resultD);
	printf("%d английских дюймов - это %.2f см\n", dym, resultED);
	printf("%d старолитовских дюймов - это %.2f см\n", dym, resultSD);
}
