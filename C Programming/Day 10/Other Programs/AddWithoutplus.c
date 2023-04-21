#include<stdio.h>
int add(int a,int b)
{
	printf("a:%db:%d\n",a,b);
	if(!a)
		return b;
	return add((a&b)<<1,a^b);
}
int main()
{
	int a=10,b=15;
	printf("%d\n",add(a,b));
	return 0;
}
