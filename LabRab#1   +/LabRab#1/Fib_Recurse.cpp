#include "Macros.h"
#include "123.h"
int fib_recurse(int n)
{
	if (n <= 1)
		return n;
	else
		return fib_recurse(n - 1) + fib_recurse(n - 2);
}