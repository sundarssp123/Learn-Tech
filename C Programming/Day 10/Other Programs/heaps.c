#include<stdio.h>

int Sift_Up(int heap[],int i,int r)
{
	int j,iTemp,N,flag=1;
	N=r;
	i=i-1;						//STEP 3(I)
	while(((2*i) < N )&& (flag==1))
	{	
		
		j=2*i+1;				//STEP 4(II)
		if(j+1<=N && heap[j+1]>heap[j])
			j=j+1;				//STEP 5

		if(heap[i]>heap[j])
			flag=0;				//STEP 6
		else
		{
			iTemp =heap[i];
			heap[i]=heap[j];
			heap[j]=iTemp;
			i=j;				//STEP 4(II)
		}		
	}
	return 0;
}


int main()
{
	int heap[30],N,i,iLast,iTemp;
	printf("Enter the no of elements :\n");
	scanf("%d",&N);
	printf("Enter the elements\n");
	for(i=0;i<N;i++)
		scanf("%d",&heap[i]);
	int r=N-1,l=N/2;				//STEP 1

	for(;l>=1;l--)					//STEP 2(I)
		Sift_Up(heap,l,N);

	while(r>=1)
	{
		iLast = r;
		iTemp=heap[0];
		heap[0]=heap[iLast];
		heap[iLast]=iTemp;
		r--;
		Sift_Up(heap,1,r);
	}						//STEP -8
	printf("After sorting\n");
		for(i=0;i<N;i++)
			printf("%d ",heap[i]);
	return 0;
}




