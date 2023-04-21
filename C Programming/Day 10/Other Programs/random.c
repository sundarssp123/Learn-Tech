#include <stdio.h>
int main()
{
	int array[10];
	int NoOfQue = 100;//oOnboRoot.oQuestionHeader.iCurrentBlockCount;
	int i=0, j;	
	srand(time(NULL));
	while(1)
	{
		if(i == 10)
			return 0;
		int flag = 1;
		int temp =rand() %  NoOfQue;
		for(j = 0 ;j < i ; j++)
		{
			if(array[j] == temp)
			{	flag = 0;break;}
			
		}
		if(flag == 1)
		{
			printf("random : %d\ni %d\n flag : %d\n",temp,i,flag);
			array[i] = temp;
			i++;
		}
	}
	return 0;
}
