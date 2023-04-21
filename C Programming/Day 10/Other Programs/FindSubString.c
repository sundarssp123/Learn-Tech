#include<stdio.h>
#include<string.h>
int main()
{
	char *a="test123string";
	char *b="qw";
	int	flag=1,i=-1,j;
	while(i=i+1,*(a+i))
	{
		flag=1,j=0;
		while(j=j+1,*(b+j))
		{
			if(a[i+j]!=b[j])
			{
				flag=0;
			}
		}
		if(flag)
		{
			printf("matched\n");
			return 0;
		}	
	}
	printf("not matched\n");	
}
