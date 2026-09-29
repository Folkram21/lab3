#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_CTYPE, "RUS");

	int num1;
	int num2;

	puts("Введите первое число ->");
	scanf("%d", &num1);
	puts("Введите второе число ->");
	scanf("%d", &num2);

	printf("Первое число - %d\n"
		  "Второе число - %d\n"
		  "Сумма - %d\n"
		   "Разность - %d\n"
		   "Произведение - %d\n"
		   "Частное - %d\n"
		   "Остаток от деления - %d\n", num1, num2, num1 + num2, num1 - num2, num1 * num2, num1 / num2, num2 % num1);
}
