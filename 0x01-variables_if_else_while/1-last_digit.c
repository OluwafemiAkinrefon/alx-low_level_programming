#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - Starts here
 *  return: Everytime return 0 (Success)
 */
int main(void)
{
	int n;
	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10;
	if (p > 5)
		printf("last digit of %d is %d and is greater than 5\n". n, p);
	if (p = 0)
		printf("last digit of %d is %d and is 0\n", n, p);
	if (p < 6 && p != 0)
		printf("last digit of %d id %d and is less than 6 and not 0\n", n, p);
	return (0);
}
