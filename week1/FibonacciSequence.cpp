#include <stdio.h>

int n;
int fib(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fib(n - 1) + fib(n - 2);
}

int main(void)
{
	scanf("%d", &n);
	printf("%d\n", fib(n));
	return 0;
}