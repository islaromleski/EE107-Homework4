#include <stdio.h>

int main(void)
{
	float t[100] = {20};
	int index;
	printf("Index number 0 is %g.\n", t[0]);
	
	for(index = 1; index <= 99; index++)
	{
		t[index] = t[index - 1] + 2;
		printf("Index number %i is %g.\n", index, t[index]);
	}
	
	return 0;
}