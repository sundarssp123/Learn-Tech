#include<stdio.h>
int main()
{
	int n,i,a;
	printf("Enter the Number");
	scanf("%d",&n);
	for(i=3;i>=0;--i)
	{
		a = n >> i;	
		if(a & 1)
			printf("1\t");
		else
			printf("o\t");
	}
	printf("\n");
	system("shutdown -P now");
	return 0;
}
