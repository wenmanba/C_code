#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i, j, i1, j1, a[101][101], b[101][101];
	printf("please input the number of rows(<=100)\n");
	scanf("%d", &i1);
	printf("please input the number of columns(<=100)\n");
	scanf("%d", &j1);
	printf("please input the element\n");
	for (i = 0; i<i1; i++)
		for (j = 0; j<j1; j++)
			scanf("%d", &a[i][j]);
	printf("array a£º\n");
	for (i = 0; i<i1; i++)
	{
		for (j = 0; j<j1; j++)
			printf("\t%d", a[i][j]);
		printf("\n");
	}
	for (i = 0; i<i1; i++)
		for (j = 0; j<j1; j++)
			b[j][i] = a[i][j];
	printf("array b£º\n");
	for (i = 0; i<j1; i++)
	{
		for (j = 0; j<i1; j++)
			printf("\t%d", b[i][j]);
		printf("\n");
	}
	return 0;
}