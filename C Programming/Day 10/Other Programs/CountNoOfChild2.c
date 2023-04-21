#include<stdio.h>
#include<string.h>
int main()
{
	char s[4][2][8]={"luke","shaw","wayne","rooney","rooney","ronaldo","shaw","rooney"};
	char f[7]={'r','o','n','a','l','d','o'};
	int i,k,j,Count=0,parent=0;
	printf("\n");
	for(i=0;i<4;i++)
		printf("%s\t%s\n" , s[i][0],s[i][1]);
#if 1
	for(i=0;i<4;i++)
	{
			if(strcmp(s[i][1],f)==0)
			{
				printf("St1:%s\n",f);			
				if(!parent)
				{
					parent++;
					strcpy(f,s[i][0]);
					i=0;
				}
				else
					Count++;
				//printf("St:%s\n",s[i][0]);			
			}
	}
	printf("Count:%d\n",Count);			

#endif
	return 0;
}

//find no of grand child
