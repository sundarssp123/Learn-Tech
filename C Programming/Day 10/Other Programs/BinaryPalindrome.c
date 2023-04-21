#include<stdio.h>
int main()
{
	int n=5,k=0,sum,i,dec=0,r=0,no=0,temp;
	for(i=5;i>=0;--i)
	{
		sum=n>>i;
		if(sum)
		{
			dec +=sum&1; 		
			dec *=10;	
		}
	}
	dec/=10;
	temp =dec;
	while(temp)
	{
		r = temp%10;
		no +=r;
		if(temp/=10)
			no *=10;  
	}
	printf("DEC:%d\n",dec);
	printf("No:%d\n",no);

	if(dec==no)
		printf("Pliandrome\n");
	else
		printf("Not_Pliandrome\n");
	return 0;
}
