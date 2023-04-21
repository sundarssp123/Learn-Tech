#include<stdio.h>

void fun(int x)
{
	//printf("in\n");
	if(x>0)
	{
		fun(--x);
		printf("%d\t",x);
		fun(--x);
	}
}
int main()
{
	fun(6);
	return 0;
}
