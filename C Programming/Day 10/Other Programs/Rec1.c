#include<stdio.h>
void fun(int n)
{
	int i=0;
	if(n>1)
		fun(n-1);
	for(i=0;i<n;i++)
		printf("* ");
	printf("\n");	
}
int main()
{
	fun(5);
	return 0;
}
