#include <stdio.h>
#include <stdlib.h>
int hw2_1(void)
{
	int x;
	printf("輸入一個整數:");
	scanf("%d", &x);
	if ((x % 2) == 0)
		printf("偶數\n");
	else
		printf("奇數\n");
	system("pause");
	return 0;
}