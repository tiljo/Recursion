#include <stdio.h>

void psr(char *s)
{
	if((*s)== '\0')
		return;
	psr(s+1);
	printf("%c",(*s));
}
int main()
{
	char a[]="tiljo";
	psr(a);
	printf("\n");
	return 0;
} 
