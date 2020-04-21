#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// https://www.acmicpc.net/problem/1009

#ifndef check
#define check(a) ((a == 0) ? (10) : (a))
#endif

int get_loop(int);

int main()
{
	for (int i = 1; i <= 20; i++)
	{
		printf("getLoop(%d): %d\n", i, get_loop(i));
	}
	int num;
	scanf_s("%d", &num);
	int* answers = malloc(num * sizeof(int));
	for (int i = 0; i < num; i++)
	{
		int a, b;
		scanf_s("%d %d", &a, &b);
		const int loop = get_loop(a);
		if (b % loop == 0)
		{
			answers[i] = check((long)pow(a, loop) % 10);
		} else
		{
			answers[i] = check((long)pow(a, b % loop) % 10);
		}
	}
	for (int i = 0; i < num; i++)
	{
		printf("%ld\n", answers[i]);
	}
	return 0;
}

int get_loop(int a)
{
	const int unitsDigit = a % 10;
	int loop = 1, temp = a * a;
	while (temp % 10 != unitsDigit)
	{
		temp *= a;
		loop++;
	}
	return loop;
}