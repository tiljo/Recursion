#include<stdio.h>
#include<math.h>
int fact(int n)
{
        if(n==0)
                return 1;

        return (n*fact(n-1));
}

float ss(float x, int n)
{
	if(n==0)
		return x;
	return (pow(-1,n)*pow(x,((2*n)+1))/fact(((2*n)+1)))+ss(x,n-1);
}

int main()
{
	float x;
	int n;
	scanf("%f%d",&x,&n);
	printf("%f\n",ss(x,n));
	return 0;
}
