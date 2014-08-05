#include <stdio.h>
int ss(int a, int b)
{
	if( b-1 == a){
		return a+b;
	}
	return b+ss(a,b-1);
}

int main()
{
	int a,b;
        printf("enter low & upper limit to calculate sum series\n");
        scanf("%d%d",&a,&b);
        printf("sum is: %d\n",ss(a,b));
        return 0;
}

