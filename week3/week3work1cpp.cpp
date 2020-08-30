#include<stdio.h>
int main() {
	int r, c, s,n,no;
	printf("Enter your number :");
	scanf_s("%d", &no);

	for (r = 0;r < no;r++)
	{
		for (s = 0;s < (no - r);s++)
		{
			printf("");
		}
		n = 1;
		for (c = 0;c <= r;c++)
		{
			printf("%d", n);
			n = n * (r - c) / (c + 1);
		}
		printf("\n");
	}
	
}