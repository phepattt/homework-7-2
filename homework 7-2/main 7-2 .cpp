#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int i, j, high[100], num, k;
	printf("HOW MANY PICTURE :");
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		printf("ENTER TRIANGLE HIGH :");
		scanf("%d", &high[i]);
		for (k = 0; k < high[i]; k++)
		{
			for (j = 0; j <= k; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}