#include <stdio.h>
void print (int a, int b)
{
	if(a<=b)
		printf("%d\n",a);
	else return;
	print((a+1),b);
}

int main()
{
	int a,b;
	printf("enter low & upper limit to print\n");
	scanf("%d%d",&a,&b);
	printf("\n");
	print(a,b);
	return 0;
}
