#include<stdio.h>
int main()
{
	char *a="sundar";
	char *b="windows";
	char *f="dar";
	int i,j,flag=0,St,En;
	for(i=0;i<strlen(a);i++)
	{
		flag =0;
		for(j=0;j<strlen(f);j++)
		{
			if(a[i+j]!=f[j])
				flag=1;
		}
		printf("\n");
		if(!flag)
		{	
			St =i;
			En = i+j;
			printf("Found\n");
			break;
		}
	}
	printf("S:%d\tE;%d\n",St,En);
	for(i=St;i<En;i++)
		printf("%c\t",b[i]);
	return 0;
}
