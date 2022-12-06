#include<stdio.h>

int main()
{
	int array[]={2,32,43,43,4,3};
	int low=0,mid,high=5;
	mid=low+high/2;
	
	int search =43;
	
	while(low<=high)
	{
		if(array[mid] < search)
			low =mid+1;
		else if(array[mid] > search)
			high = mid-1;
		else
		{
			
			printf("element found\n");
			break;
		}	
		mid=low+high/2;

	}
	if(low>high)
		printf("element not found");
	
	return 0;
}
