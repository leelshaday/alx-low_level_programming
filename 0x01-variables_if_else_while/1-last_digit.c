#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main generate random number n
 * then determine if n=0,n>5,n<5
 * return 0
 */

int main(void)

{
int n;
int l= n % 10;

srand(time(0));
n = rand() - RAND_MAX / 2;


if (n % 10 > 5)
{
printf("last digit of %i is %i and greater than 5\n", n, l);
}
else if (n % 10 == 0)
{
printf("last  digit of %i is %i and is 0\n", n, l);
}
else
{
printf("last digit of %i is %i and is less than 6 and not 0\n", n, l);
}
return (0);
}
