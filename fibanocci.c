#include <stdio.h>

int fib(int n)
{
	if(n<2){
		return n;
	}
	
	return (fib(n-1)+fib(n-2));
}

int main()
{
	int n;
	printf("enter a no:\n");
	scanf("%d",&n);
	printf("%dth term of fibanocci is	%d\n",n,fib(n));
	return 0;
}
