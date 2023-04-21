#include<stdio.h>
void fun(int n)
{
	if(n <=0)
		return ;
	if(n > 1000)
		return ;
	printf("a:%d\t",n);
	fun(2*n);
	printf("\n");
	printf("b:%d",n);
}
int main()
{
	fun(5);
	return 0;
}
