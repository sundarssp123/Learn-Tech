#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,cnt=0;
	scanf("%d",&n);
	for(i=31;i>=0;i--)
	{
//		printf("s:%d\n",(n>>i));
//		printf("b:%d\n",(n>>i)&1);
		if(n>>i)
			cnt++;
	}
	printf("\n%d\n",cnt);
	return 0;
}
