#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define D 2.54

void main() {
	setlocale(LC_CTYPE, "RUS");

	int dym;
	float result;

	printf("Âגוהטעו קטסכמ צוכûץ ה‏ילמג -> ");
	scanf("%d", &dym);

	result = D * dym;

	printf("%d ה‏ילמג - ‎עמ %.2f סל", dym, result);
}
