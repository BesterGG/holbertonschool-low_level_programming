#include <stdio.h>

int main(int argc, char *argv[])
{
int i, j, add;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < argv[i]; j++)
		{
			add += atoi(argv[i]);
		}
	}
}
