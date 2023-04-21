#include<stdio.h>
#include<math.h>

void F()
{
	printf("4");
}
void S()
{
	printf("7");
}
int main()
{
	int a=4,i,j,k;
	int b=7;

	for(i=1;i<2;i++)
	{
		k = pow(2,i);
		j=i;
		while(j)
		{
			F();
			printf(" ");			
			S();
			j--;
		}
		printf("K:%d\n",k);
		while(k)
		{
			F();
			printf(" ");			
			S();
			k--;
		}	
	}
	printf("\n");			

	return 0;
}
