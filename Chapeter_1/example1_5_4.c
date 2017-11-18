#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define IN 1
#define OUT 0
int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Enter a File Name\n");
		return 1;
	}
	FILE *fp;
	fp = fopen(argv[1], "r");
	int state = OUT;
	int nl, nc, nw;
	nl = nc = nw = 0;
	int c;
	while(( c = fgetc(fp)) != EOF)
	{
		nc++;
		if (c == '\n')
			nl++;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT)
		{
			nw++;
			state = IN;
		}
	}
	printf("word: %d\nline: %d\ncharacter: %d\n",nw,nl,nc);
	return 0;
}
