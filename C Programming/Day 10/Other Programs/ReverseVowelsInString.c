#include<stdio.h>

int main()
{
	char a[100];
	char Vowel[100];
	int VowelPos[100],k=0,i=0;
	printf("Eneter The String");
	scanf("%s",a);

	int n = 0;
	while(a[i]!='\0')
	{
		n++;
		i++;
	}
	printf("n:%d\n",n);
	printf("Before Change\n");
		printf("VOEWL:%s\n",a);
	
	for(i=0;i<n;i++)
	{
		if(a[i]=='a')
		{
			Vowel[k] = 'a';
			VowelPos[k] = i;
			k++;
		}
		if(a[i]=='e')
		{
			Vowel[k] = 'e';
			VowelPos[k] = i;
			k++;
		}
		if(a[i]=='i')
		{
			Vowel[k] = 'i';
			VowelPos[k] = i;
			k++;
		}
		if(a[i]=='o')
		{
			Vowel[k] = 'o';
			VowelPos[k] = i;
			k++;
		}
		if(a[i]=='u')
		{
			Vowel[k] = 'u';
			VowelPos[k] = i;
			k++;
		}
	}

	for(i=0;i<k;i++)
	{
		printf("VOEWL:%c\tPos:%d\n",Vowel[i],VowelPos[i]);
	}
	int j=0;
	int g=k;
	for(i=VowelPos[j];j<g;j++)
	{
		i=VowelPos[j];
		printf("i:%d\n",i);
		a[i] = Vowel[k-1];
		printf("1:%c\t2:%c\n",a[i] ,Vowel[k-1]);
		k--;
	}
	printf("After Change\n");
	printf("VOEWL:%s\n",a);	
	return 0;
}

