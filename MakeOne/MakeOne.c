#include <stdio.h>

// https://www.acmicpc.net/problem/1463

int min = 2147483647;
void make_one(int, int);

int main()
{
	int num;
	scanf_s("%d", &num);
	make_one(num, 0);
	printf("%d", min);
	return 0;
}

void make_one(int i, int current)
{
	if (current > min) return;
	if (i <= 1) {
		if (current < min) min = current;
		return;
	}
	if (i % 3 == 0) make_one(i / 3, current++);
	if (i % 2 == 0) make_one(i / 2, current++);
	make_one(i - 1, current++);
}