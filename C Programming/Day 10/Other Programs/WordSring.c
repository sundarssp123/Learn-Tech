#include<stdio.h>
#include<string.h>
int main()
{
	char s[200]="india won the match";
	char r[20][20];
	char f[200];
	int i,j=0,count=0,k=0,l=0;
	for(i=0;i<=strlen(s);i++)
	{
		if(s[i]=='\0'||s[i]==' ')
		{
			count++;
			r[j][k]='\0';
			k=0;
			j++;
			continue;
		}	
		r[j][k]=s[i];
		k++;
	}
	for(i=0;i<count;i++)
		printf("s:%s\n",r[i]);
	printf("No of words in the string is:%d\n",count);
	j=count-1,k=0;
	for(i=0;i<count;i++)
	{
		while(r[j][k]!='\0')
                {
			f[l]=r[j][k];
			l++;
			k++;
		}
		f[l]=' ';
		l++;
		k=0;
		j--;
	}
	f[l]='\0';
	printf("string:%s\n",f);
	return 0;
}
