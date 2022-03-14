#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)
{
	int n;

<<<<<<< HEAD
	srand(time(0));
	n = rand() - RAND_MAX / 2;

if (n == 0)
{
printf("%i is zero\n", n);
}
else if (n > 0)
{
printf("%i is positive\n", n);
}
else
{
printf("%i is negative\n", n);
}
return (0);
}
=======
srand(time(0));
n = rand() - RAND_MAX /2

if (n==0)
{
printf("%i is zero\n", n);
}

else if (n<0)
{printf("%i is negative\n" , n);
}

else
{
printf{"%i is positive\n" , n);
}

return (0);

}

>>>>>>> 5c192153f43d7f324b1d9ea55fccac5ccc47fe83
