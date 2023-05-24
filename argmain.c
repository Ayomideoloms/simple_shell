#include <stdio.h>

int main(int ac, char **av)
{
	char **aa;

	aa = av
	while (aa)
	{
		printf("%s\n", *aa);
		aa++;
	}
	return (0);
}

