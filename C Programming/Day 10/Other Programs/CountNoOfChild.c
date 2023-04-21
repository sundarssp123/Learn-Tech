#include<stdio.h>
#include<string.h>
int main()
{
	char s[10][10]={"luke","shaw","wayne","rooney","rooney","ronaldo","shaw","rooney"};
	char f[7]={'r','o','n','a','l','d','o'};
	int i,k,j,Count=0,parent=0;
	for(i=0;i<8;i++)
	{
		if(i%2!=0)
			if(strcmp(s[i],f)==0)
			{
				printf("St1:%s\n",f);			
				if(!parent)
				{
					parent++;
					strcpy(f,s[i-1]);
					i=0;
				}
				else
					Count++;
				printf("St:%s\n",s[i-1]);			
			}
	}
	printf("Count:%d\n",Count);			
	return 0;
}

//find no of grand child
