int main(void)
{
	int i, j, k;
	for (i=1; i <= 10; i++) {
		k=1;
		for (j = 1; k <= i; j++) {
			k = k*j;
		}
	}
	
	return 0;
}