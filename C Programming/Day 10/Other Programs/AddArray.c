#include<stdio.h>
int main()
{
	int a[]={9,2,8,1,3,5,6,7,3,1,1,6};
	int b[]={7,8,4,6,2,1,9,9,7};
	int ans[12]={};
	int m[12]={};
	int ap,bp,mp;
	ap =(sizeof(a)/sizeof(a[0]))-1;
	bp =(sizeof(b)/sizeof(b[0]))-1;
	mp = (ap > bp) ? ap : bp;

	int i;
#if 1
	while(ap+1)
	{	

		if(bp+1)
		{	
			ans[mp]=(a[ap]+b[bp]+m[mp])%10; 
			printf("A:%d\tB:%d\tM:%d\tAns:%d\tmp:%d\n",a[ap],b[bp],m[mp],ans[mp],mp);
			m[mp-1]=(a[ap]+b[bp]+m[mp])/10;
			bp--;
		}
		else
		{
			ans[mp]=(a[ap]+m[mp])%10; 
			printf("A:%d\tM:%d\tAns:%d\tmp:%d\n",a[ap],m[mp],ans[mp],mp);
			m[mp-1]=(a[ap]+m[mp])/10;		
		}	
			ap--;
			mp--; 
	}
	printf("\n");
	for(i=0;i<12;i++)
		printf("%d\t",ans[i]);
#endif	
	return 0;
}

