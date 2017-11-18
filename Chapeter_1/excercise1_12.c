#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#define IN 1
#define OUT 0
bool printWordPerLine(FILE *fp)
{
	bool state = OUT;
	int32_t c;
	while((c = fgetc(fp)) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
		{
			if (state == IN)
			{
				state = IN;
				putchar('\n');
			}
		}
		else
		{
			if (state == OUT)
			{
				state = IN;
			}
			putchar(c);
		}
	}
	return 0;
}
int main(int argc, char **argv)
{
	if (argc < 2)
	{
		perror("Enter a file name\n");
	}
	FILE *fp;
	fp = fopen(argv[1], "r");
	bool status = printWordPerLine(fp);
	return status;

}
