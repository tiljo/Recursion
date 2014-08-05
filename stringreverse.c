#include<stdio.h>
#include<string.h>

void string_reverse(char* start, char* s)
{
	if(*s == '\0') return;
	char t = *s;
	int k = strlen(s)-1;
	
	string_reverse(start,(s+1));

	*(start + k) =t;
}

int main()
{
	char s[100];
	printf("give a string\n");
	scanf("%s",s);
	string_reverse(s,s);
	printf("%s\n",s);
	return 0;
}
