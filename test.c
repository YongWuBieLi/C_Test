#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int	main() {
	int num = 0;
	int a = num % 2 == 0 ? 0 : 1;
	for (int i = 1;i < 5;i++) {
		printf("1");
	}
	return 0;
}