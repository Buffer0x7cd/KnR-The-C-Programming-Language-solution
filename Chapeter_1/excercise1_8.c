#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct Counter
{
	int blanks;
	int tabs;
	int newLines;
};
typedef struct Counter Counter;

void initCounter(Counter *arg)
{
	arg->blanks = 0;
	arg->tabs = 0;
	arg->newLines = 0;
}
int main(int argc, char **argv)
{
	int c;
	Counter counter;
	initCounter(&counter);
	if (argc < 2)
	{
		printf("Enter a file name\n");
		return 1;
	}
	FILE *fp;
	fp = fopen(argv[1], "r");
	while((c = fgetc(fp)) != EOF)
	{
		if (c == '\t')
			counter.tabs++;
		if (c == '\n')
			counter.newLines++;
		if (c == ' ')
			counter.blanks++;
		putchar(c);
	}
	printf("Blanks: %d\nTabs: %d\nNewLines: %d\n", counter.blanks, counter.tabs, counter.newLines);
	return 0;

}
