#include<stdio.h>
int main()
{
	char string [20],rstring[20];
	int length=0,i,flag=0;

	printf("Enter the string:\n");
	scanf("%s",string);

	for(i=0;string[i]!='\0';i++)
		length++;
	for(i=length-1;i>=0;i--)
		rstring[length-i-1]=string[i];
	
	for(i=0;i<length;i++)
		if(string[i]!=rstring[i])
		{
			printf("the given string is nor palindrome\n");
			return 0;
		}
	printf("the given string is palindrome\n");
	return 0;
}	
