#include <stdio.h>

int main(void)
{
	float input1, input2, answer;
	char operator;
	
	printf("Please type the addition or subtraction you "
	"want to do in the form of value1 +/- value2.\n\n");
	
	scanf("%f %c %f", &input1, &operator, &input2);
	
	if(operator == '+')
	{
		answer = input1 + input2;
	}
	else
	{
		answer = input1 - input2;
	}
	
	printf("\nThe answer is %g.", answer);
	
	return 0;
}