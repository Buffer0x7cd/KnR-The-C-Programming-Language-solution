#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define LOWER 0
#define UPPER 300
#define step 20
int main(int argc, char **argv)
{
	int32_t fahr;
	fahr = LOWER;
	printf("Fahrenheit\tCelsius\n");
	for(fahr = LOWER; fahr <= UPPER; fahr += step)
	{
		printf("%3d \t\t%6.1f\n",fahr, (5.0/9.0)*(fahr - 32));
	}
}
