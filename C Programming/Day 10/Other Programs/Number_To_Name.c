#include<stdio.h>
N0()
{
printf("zero\t");
}

N1()
{
printf("one\t");
}

N2()
{
printf("two\t");
}

N3()
{
printf("three\t");
}

N4()
{
printf("four\t");
}

N5()
{
printf("five\t");
}

N6()
{
printf("six\t");
}

N7()
{
printf("sevan\t");
}

N8()
{
printf("eight\t");
}

N9()
{
printf("nine\t");
}


int main()
{
	int a,digit=0,fact=1,i=0,j=0,sum=0,n;		
	printf("Enter the Number:");
	scanf("%d",&a);
	int temp =a;
	int ans[10];
	int (*funptr[])()={N0,N1,N2,N3,N4,N5,N6,N7,N8,N9};
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

	for(i=0;i<digit;i++)	
	{
		int a=ans[i];
		(*funptr[a])();
		printf("\n");
	}	
	return 0;
}
