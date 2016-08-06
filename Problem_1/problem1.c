#include <stdio.h>

int main(void)
{
	int mult;
	int res;

	mult = 0;
	res = 0;
	while (mult < 1000)
	{
		if (mult % 3 == 0 || mult % 5 == 0)
		{
			res += mult;
		}
		mult++;
	}
	printf("%d\n", res);
	return (0);
}