#include <stdio.h>
#include <math.h>
#include <string.h>
#include "calculate.h"

float
Calculate (float Numeral, char Operation[4])
{
	float SecondNumeral;
	if (strncmp(Operation, "+", 1) == 0)
	{
		printf("Second numeral: ");
		scanf("%f", &SecondNumeral);
		return(Numeral + SecondNumeral);
	}
	else if(strncmp(Operation, "-", 1) == 0)
	{
		printf("Deductible: ");
		scanf("%f", &SecondNumeral);
		return(Numeral - SecondNumeral);
	}
	else if(strncmp(Operation, "*", 1) == 0)
	{
		printf("Multiplier: ");
		scanf("%f", &SecondNumeral);
		return(Numeral * SecondNumeral);
	}
	else if(strncmp(Operation, "/", 1) == 0)
	{
		printf("Divider: ");
		scanf("%f", &SecondNumeral);
		if(SecondNumeral == 0)
		{
			printf("Error: division by zero! ");
			return(HUGE_VAL);
		}
		else
		{
			return(Numeral / SecondNumeral);
		}
	}
	else if(strncmp(Operation, "pow", 3) == 0)
	{
		printf("Power: ");
		scanf("%f", &SecondNumeral);
		return(pow(Numeral, SecondNumeral));
	}
	else if(strncmp(Operation, "sqrt", 4) == 0)
		return(sqrt(Numeral));
	else if(strncmp(Operation, "sin", 3) == 0)
		return(sin(Numeral));
	else if(strncmp(Operation, "cos", 3) == 0)
		return(cos(Numeral));
	else if(strncmp(Operation, "tan", 3) == 0)
		return(tan(Numeral));
	else
	{
		printf("Incorrectly entered action ");
		return(HUGE_VAL);
	}
	printf("File has been changed");
}
