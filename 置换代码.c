#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 5



void main()
{
	int a[N] = { 1,2,3,4,5 }, temp, i;
	for (i = 0; i <N / 2; i++)
	{
		temp = a[i];
		a[i] = a[N - i - 1];
		a[N - i - 1] = temp;		

	}
	for (i = 0; i < N ; i++)
	{
		printf("%d", a[i]);
	}
}
