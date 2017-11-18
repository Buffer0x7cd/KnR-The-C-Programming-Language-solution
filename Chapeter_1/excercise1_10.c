#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Enetr a file name\n");
		return 1;
	}
	FILE *fp;
	fp = fopen(argv[1], "r");
	int c;
	while((c = fgetc(fp)) != EOF)
	{
		if (c == ' ')
		{
			printf("\\b");
			continue;
		}
		if (c == '\t')
		{
			printf("\\t");
			continue;
		}
		if (c == '\\')
		{
			printf("\\");
			continue;
		}
		putchar(c);
	}
	return 0;

}
