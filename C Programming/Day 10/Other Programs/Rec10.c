#include<stdio.h>

void fun(int n)
{
	if(n > 0)
	{
		fun(n-1);
		printf("%d\t",n);
		fun(n-1);	
	}	
}

int main()
{
	fun(4);
	return 0;
}
