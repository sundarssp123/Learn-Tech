#include<stdio.h>
#include<string.h>
int main()
{
	char s[20], word[10],Re[10];
	int sl,wl,rl,flag=0,i,j,k1=0;
	printf("Enetr the string:\t");
	scanf("%[^\n]%*c",s);
	printf("Enter the Word\t");
	scanf("%s",word);
	printf("\nEnter the string you want to replace:\t");
	scanf("%s",Re);	
	sl =strlen(s);
	wl =strlen(word);
	rl = strlen(Re);
	for(i=0;i<sl;i++)
	{
		flag=1;
		for(j=0;j<wl;j++)
		{
			if(s[i+j]!=word[j])
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			printf("'%s'found at index:%d\n",word,i);
			for(j=0;j<rl;j++)
				s[i+j]=Re[j];

			int k=0,diff = wl -rl,len = i+j;
			while(len+k < sl)
			{
				s[len + k]=s[len + k +diff];
				k++;
			}
		}
	}
	printf("Replaced string:\t%s\n",s);
	return 0;
}
