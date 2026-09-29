#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_CTYPE, "RUS");

	float a;
	float b;

	printf("¬ведите первое число -> ");
	scanf("%f", &a);
	printf("¬ведите второе число -> ");
	scanf("%f", &b);

	printf("_________________________________________________________________________\n");
	printf("|	a * b		|	a + b		|	a - b		|\n");
	printf("-------------------------------------------------------------------------\n");
	printf("|%10.2f * %-10.2f|%10.2f + %-10.2f|%10.2f - %-10.2f|\n", a, b, a, b, a, b);
	printf("-------------------------------------------------------------------------\n");
	printf("|%23.2f|%23.2f|%23.2f|\n", a * b, a + b, a - b);
}
