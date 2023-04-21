#include<stdio.h>
int main()
{
	int x=10;
	int y=20;
	printf("BeforeSwap:%d\t%d\n",x,y);
	x = x^y;
	y = x^y;
	x = x^y;
	printf("AfterSwap:%d\t%d\n",x,y); 
	return 0;
}
