#include <stdio.h>
#include <stdlib.h>

static void solve(int source, int target, int transit, int n)
{
	if (n == 0)
		return ;
	solve(source, transit, target, n - 1);
	printf("%dth disk: from %d -> %d\n", n, source, target);
	solve(transit, target, source, n - 1);
}

int main(int argc, char **argv)
{
	int n;
	if (argc != 2)
	{
		printf("Not valid parameter given\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 1)
	{
		printf("Incorrect token count\n");
		return (2);
	}
	solve(1, 3, 2, n);
	return (0);
}

