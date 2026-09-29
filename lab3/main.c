#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_CTYPE, "RUS");

	int dym;
	float result;
	float D = 2.54;

	print("Âגוהטעו קטסכמ צוכûץ ה‏ילמג -> ");
	scanf("%d", &dym);

	result = D * dym;

	printf("%d ה‏ילמג - ‎עמ %.1f סל", dym, result);
}
