#include<stdio.h>
int main()
{
	int a,digit=0,fact=1,i=0,j=0,sum=0,n;		
	printf("Enter the Number:");
	scanf("%d",&a);
	int temp =a;
	int ans[10];
	while(temp)
	{
		temp=temp/10;
		digit++;
	}
	for(i=0;i<digit-1;i++)
		fact *=10;
	while(a)
	{
		ans[j]=a/fact;
		printf("%d\n",ans[j]);
		a=a%fact;
		j++;
		fact =fact/10;
	}
	printf("Enter the Number:");
	scanf("%d",&n);
	for(i=0;i<digit;i++)
		if(n == ans[i])
			break;	
	if(i==0)
		printf("Ones\n");
	if(i==1)
		printf("Tens\n");
	if(i==2)
		printf("Hundreads\n");
	if(i==3)
		printf("Twosands\n");
	if(i==4)
		printf("TenTwosands\n");
	if(i==5)
		printf("Lasks\n");
	return 0;
}
