#include<stdio.h>
void create(int [],int );
void down_adjust(int [],int,int );
void main()
{
	int heap[30],n,i,last,temp;
	printf("Enter the no of elements :\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=1;i<=n;i++)
		scanf("%d",&heap[i]);
	heap[0]=n;
	int r=n;	
	create(heap,n);
	while(r>1)
	{
		last = r;
		temp=heap[1];
		heap[1]=heap[last];
		heap[last]=temp;
		r--;
		down_adjust(heap,1,r);
		printf("R:%d\n",r);
		for(i=1;i<=n;i++)
			printf("%d ",heap[i]);
			printf("End\n");
	}
	printf("After sorting\n");
		for(i=1;i<=n;i++)
			printf("%d ",heap[i]);
}

void create(int heap[],int n)
{
	int l=n/2,i;

	for(;l>=1;l--)
	{
		down_adjust(heap,l,n);
						for(i=1;i<=n;i++)
			printf("%d ",heap[i]);	
			printf("over\n");
	}
}

void down_adjust(int heap[],int i,int r)
{
	int j,temp,n,flag=1;
	n=r;
	while(((2*i) <= n )&& (flag==1))
	{
		printf("while\n");
		j=2*i;
		printf("i:%d\tj:%d\n",i,j);
		if(j+1<=n && heap[j+1]>heap[j])
		{
			
			printf("ds\n");
			j=j+1;
		}
		if(heap[i]>heap[j])
			flag=0;
		else
		{
			printf("else\n");
			temp =heap[i];
			heap[i]=heap[j];
			heap[j]=temp;
			i=j;
		}		
	}
}
