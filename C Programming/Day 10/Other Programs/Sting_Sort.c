#include<stdio.h>
#include<string.h>
int main()
{
	char a[20][20],temp[20];
	int i,j,n;
	printf("Enter the no string\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	int e=strcmp(a[0],a[1]);
		printf("e:%d\n",e);	
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(a[i],a[j])>0)
			{
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}
		}
	}
	for(i=0;i<n;i++)
		printf("string %d:%s\n",i,a[i]);			
		
	return 0;
}
