#include<stdio.h>

void fun(char *s)
{
	if(s[0] == '\0')
		return ;
	fun(s+1);
	fun(s+1);
	printf("%c\t",s[0]);
}

int main()
{
	fun("abcd");
	return 0;
}
