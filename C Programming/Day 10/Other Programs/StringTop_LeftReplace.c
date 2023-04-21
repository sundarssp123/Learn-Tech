#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[5][5]={'w','e','l','c','o','m','e','t','o','z','o','h','o','c','o','r','p','o','r','a','t','i','o','n'};
	printf("String:%s\n",s);
	int len;
	len = strlen(s);
	printf("len:%d\n",len);
	char f[4]={'l','t','o'};
	int i,j,flag=1,k,flag1=1;

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%c\t",s[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			flag =1;
			flag1 =1;
			for(k=0;k<3;k++)
			{
				if(s[j+k][i]!=f[k])
				{
					flag = 0;
				}
					
			}
			for(k=0;k<3;k++)
			{
				if(s[i][j+k]!=f[k])
				{
					flag1 = 0;
				}					
			}
			if(flag)
			{
				printf("i:%d\tj:%d\n",j,i);
				printf("i:%d\tj:%d\n",j+k-1,i);

				printf("top_match\n");
			}
			if(flag1)
			{
				printf("i:%d\tj:%d\n",i,j);
				printf("i:%d\tj:%d\n",i,j+k-1);
				printf("left_match\n");
			}		
		}
	} 
	return 0;
}
