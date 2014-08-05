#include<stdio.h>

int reverse(int n)
{
	if(n/10 == 0)
		return n%10;

	if(n/10 > 99)
		return ((n%10)*1000 + reverse(n/10));
	else if(n/10 >9)
                return ((n%10)*100 + reverse(n/10));
	else if(n/10 > 0)
                return ((n%10)*10 + reverse(n/10));
	else	return 0;


}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",reverse(n));
	return 0;
}



