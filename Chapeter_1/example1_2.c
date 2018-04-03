#include <stdio.h>
#define LOW 0
#define HIGH 300

int main(void){
	float fahr, celsius;
	int step = 20;
	fahr = LOW;
	while(fahr <= HIGH){
		celsius = 5.0/9.0 * (fahr - 32.0);
		printf("%3.0f\t%6.2f\n",fahr,celsius);
		fahr += step;
	}

}
