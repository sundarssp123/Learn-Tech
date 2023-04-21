#include<stdio.h>
int main()
{
	int heap[16],no,i,j,c,root,temp;
	printf("Enter the no of elements\n");
	scanf("%d",&no);
	printf("Enter the numbers:\n");
	for(i=0;i<no;i++)	
		scanf("%d",&heap[i]);

	printf("\nFirst:");
	for(i=0;i<no;i++)
		printf("%d\t",heap[i]);

	for(i=1;i<no;i++)
	{
		c=i;
		do
		{
			root=(c-1)/2;
			if(heap[root]<heap[c])
			{
				temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c =root;
		}while(c!=0);
	}
	printf("\nHeap array:");
	for(i=0;i<no;i++)
		printf("%d\t",heap[i]);
#if 1
	for(j =no-1;j>=0;j--)
	{
		printf("For\n");
		temp =heap[0];
		heap[0]=heap[j];
		heap[j]=temp;
		root=0;	
		do
		{
			printf("do\n");
			c=2*root+1;
			printf("c:%d\n",c);

			if(heap[c]<heap[c+1]&&c<j-1)
			{
				printf("Statisfied\n");
				c++;
			}

			if(heap[root]<heap[c] && c<j)
			{
				printf("if\n");
				temp = heap[root];
				heap[root]= heap[c];
				heap[c] =temp;
			}
			root=c;
												for(i=0;i<no;i++)
												printf("%d\t",heap[i]);	
		}while(c<j);
	}
#endif
	printf("Sorted array:\n");
	for(i=0;i<no;i++)
		printf("\t%d",heap[i]);
		
}
