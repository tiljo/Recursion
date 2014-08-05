#include<stdio.h>
#include<string.h>

int pal(char* start,char* s)
{
        if(*s == '\0') return 1;
        int k = strlen(s)-1;
	
//	if(strlen(start)%2 == 1)
	        return (*(start + k) == *s)&(pal(start,s+1));
//	else return 0;		
}

int main()
{
	char s[100];
	printf("enter a a string to check for paliandrome...\n");
	scanf("%s",s);
	printf("%d\n",pal(s,s));
	return 0;
}
