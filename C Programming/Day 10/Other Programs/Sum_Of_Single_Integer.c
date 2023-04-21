#include<stdio.h>
int main()
{
	int a=35465,digit=0,fact=1,i=0,j=0,sum=0;
	int temp =a;
	int ans[10];
	while(temp)
	{
		temp=temp/10;
		digit++;
	}
	printf("digit:%d\n",digit);

	for(i=0;i<digit-1;i++)
		fact *=10;
	while(a)
	{
		ans[j] = a/fact;
		printf("%d\n",ans[j]);
		a = a%fact;
		fact = fact/10;
		j++;
	}
	for(i=0;i<digit;i++)
	sum =sum+ans[i];
	printf("sum of the integer is:%d\n",sum);
	return 0;
}
