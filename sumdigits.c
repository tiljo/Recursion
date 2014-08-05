#include<stdio.h>

int sd(int n)
{
	if(n/10 == 0)
		return n%10;

	return (n%10)+sd(n/10);
}

int main()
{
	int n;
	printf("enter a no:\n");
	scanf("%d",&n);
	printf("sumdigits is: %d\n",sd(n));
	return 0;
}
