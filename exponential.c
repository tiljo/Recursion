#include<stdio.h>
#include<math.h>
int fact(int n)
{
        if(n==0)
                return 1;

        return (n*fact(n-1));
}

float expn(float x, int n)
{
	if(n == 0)
		return 1;
	return (pow(x,n)/fact(n)) + expn(x,n-1);
}

int main()
{
	int n;
	float x;
	printf("enter a float no & limit int for expn\n");
	scanf("%f%d",&x,&n);
	printf("%f\n",expn(x,n));
	return 0;
}
