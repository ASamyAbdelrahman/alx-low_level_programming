#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 */

void jack_bauer(void)
{
	for (int hr = 0; hr <= 23; hr++)
		for (int min = o; min <= 59; min++)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putcahr((min % 10) + 48);
			_putchar('\n');
		}
}
