#include "main.h"
#include <stdio.h>

/**
 * _abs - value absolute
 *
 * @i: the integer to be converted.
 * Return:Always 0.
 */

int_abs(int i)
{

if (i < 0)
{
return (i * (-1));
}

else if (i == 0)
{
return(0);
}

else
{
return (i);
}

}
