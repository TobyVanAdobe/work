#include <stdio.h>
#include "calculate.h"

int
main(void)
{
	float Numeral;
	char Operation[4];
	float Result;
	printf("Number: ");
	scanf("%f", &Numeral);
	printf("Operation (+, -, *, /, pow, sqrt, sin, cos, tan): ");
	scanf("%s", Operation);
	Result = Calculate(Numeral, Operation);
	printf("%6.2f\n", Result);
	printf("file has been modified");
	return 0;
}
