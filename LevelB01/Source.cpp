#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, j,k;
	char x[100];
	scanf("%s", x);
	for (i = 0; x[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			printf("%c", x[i]);
		}
		printf("\n");
	}
	return 0;
}