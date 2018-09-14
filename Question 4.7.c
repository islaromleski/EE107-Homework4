#include <stdio.h>

int main(void)
{
	int	 numberGrades[100], counter[5] = {0, 0, 0, 0, 0}, index;
	char letterGrades[100];
	
	printf("Please enter the 100 scores you want to grade:\n");
	
	for(index = 0; index <=99; ++index)
	{
		scanf("%i", &numberGrades[index]);
		
		if(numberGrades[index] >= 90)
		{
			letterGrades[index] = 'A';
			++counter[0];
		}
		else if(numberGrades[index] < 90 && numberGrades[index] >= 80)
		{
			letterGrades[index] = 'B';
			++counter[1];
		}
		else if(numberGrades[index] < 80 && numberGrades[index] >= 70)
		{
			letterGrades[index] = 'C';
			++counter[2];
		}
		else if(numberGrades[index] < 70 && numberGrades[index] >= 60)
		{
			letterGrades[index] = 'D';
			++counter[3];
		}
		else
		{
			letterGrades[index] = 'F';
			++counter[4];
		}
	}
	
	printf("\nThe letter grades are as follows:\n");
	printf("As = %i\n", counter[0]);
	printf("Bs = %i\n", counter[1]);
	printf("Cs = %i\n", counter[2]);
	printf("Ds = %i\n", counter[3]);
	printf("Fs = %i\n", counter[4]);

	return 0;
}