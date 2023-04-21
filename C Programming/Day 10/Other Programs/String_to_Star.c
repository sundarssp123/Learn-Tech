#include<stdio.h>
#include<string.h>
int A()
{
	int i,j,n=5,t,s;														
	s=4;		
	for(i=0;i<n;i++)
	{
		for(t=1;t<=s-i;t++)
		{
			printf(" ");
		}	
		printf(" *");
		if(i!=n/2)
		{	
			for(j=1;j<i*2;j++)												
			{	
				printf(" ");
			}
		}
		else
			for(j=0;j<n/2;j++)
				printf(" *");
		if(i>0&&i!=n/2)
			printf("*");
		printf("\n");
	}
	return 0;
}

int B()
{
	int i,j,n=5,t,s,k=0;														
	s=4;		
	for(i=0;i<n;i++)
	{

		if(i==0 || i==n-1 || i==n/2)
		{		
			for(j=0;j<s-1;j++)												
			{	
				printf(" *");
			}
		}
		else
		{
			printf(" *");
			for(t=0;t<(s-2)*2;t++)
			{
				printf(" ");
			}
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}

int C()
{
	int i,j,n=5,t,s,k=0;														
	s=4;		
	for(i=0;i<n;i++)
	{

		if(i==0 || i==n-1 )
		{		printf(" ");
			for(j=0;j<s;j++)												
			{	
				printf(" *");
			}
		}
		else
		{
			printf(" *");
			for(t=0;t<(s-2)*2;t++)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

int D()
{
	int i,j,n=5,t,s,k=0;														
	s=4;	
	for(i=0;i<n;i++)
	{
		if(i==0 || i==n-1)
		{		
			for(j=0;j<s-1;j++)												
			{	
				printf(" *");
			}
		}
		else
		{
			printf(" *");
			for(t=0;t<(s-2)*2;t++)
			{
				printf(" ");
			}
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}

int E()
{
	int i,j,n=5,t,s,k=0;														
	s=4;		
	for(i=0;i<n;i++)
	{
		if(i==0 || i==n-1 || i==n/2)
		{		
			for(j=0;j<s;j++)												
			{	
				printf(" *");
			}
		}
		else
		{
			printf(" *");
			for(t=0;t<(s-2)*2;t++)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}


int F()
{
	int i,j,n=5,t,s,k=0;														
	s=4;		
	for(i=0;i<n;i++)
	{
		if(i==0 || i==n/2)
		{		
			for(j=0;j<s;j++)												
			{	
				printf(" *");
			}
		}
		else
		{
			printf(" *");
			for(t=0;t<(s-2)*2;t++)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

int G()
{
	int i,j,n=5,t,s,k=0;														
	s=4;		
	for(i=0;i<n;i++)
	{
		if(i==0 || i==n-1 )
		{		
			printf(" ");
			for(j=0;j<s;j++)												
			{	
				printf(" *");
			}
		}
		else if(i==n/2)
		{
			printf(" *");
			printf(" ");
			for(j=0;j<s-1;j++)												
			{	
				printf(" *");
			}			
		}
		else
		{
			printf(" *");
			for(t=0;t<(s-2)*2;t++)
			{
				printf(" ");
			}
			if(i>n/2)
				printf("  *");
		}
		printf("\n");
	}
	return 0;
}

int H()
{
	int i,j,n=5,t,s,k=0;														
	s=4;		
	for(i=0;i<n;i++)
	{
		if( i==n/2)
		{		
			for(j=0;j<s;j++)												
			{	
				printf(" *");
			}
		}
		else
		{
			printf(" *");
			for(t=0;t<(s-2)*2;t++)
			{
				printf(" ");
			}
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}

int I()
{
	int i,j,n=5,t,s,k=0;														
	s=5;		
	for(i=0;i<n;i++)
	{
		if(i==0 || i==n-1)
		{		
			for(j=0;j<s;j++)												
			{	
				printf(" *");
			}
		}
		else
		{
			for(t=0;t<(s-2)*2;t++)
			{

				if(t==(n/2)*2)
					printf(" *");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

int J()
{
	int i,j,n=5,t,s,k=0;														
	s=4;	
	for(i=0;i<n;i++)
	{
		if(i==0)	
			for(j=0;j<s;j++)												
			{	
				printf(" *");
			}
		else
		{

			if(i==n-2)
			{
				for(t=0;t<((s-2)+1)-2;t++)		
					printf(" ");	
				printf(" * *");
			}
			else if(i==n-3)
			{
				for(t=0;t<((s-2)+1)-3;t++)		
					printf(" ");	
				printf(" *  *");
			}
			else
			{
				for(t=0;t<(s-2)+1;t++)	
					printf(" ");
				printf(" *");
			}
		}
		printf("\n");
	}
	return 0;
}

int K()
{
	int i,j,n=5,t,s,k=0;														
	s=4;		
	for(i=0;i<n;i++)
	{

		if(i<n/2)
		{
			printf(" *");
			for(t=0;t<(i+n/2)*2-i*4;t++)
			{
				printf(" ");
			}
			printf(" *");
		}
		else if(i>=n/2)
		{
			printf(" *");
			for(t=0;t<(i-n/2)*2;t++)
			{
				printf(" ");
			}
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}


int L()
{
	int i,j,n=5,t,s,k=0;														
	s=4;		
	for(i=0;i<n;i++)
	{
		if(i==n-1)
		{		
			for(j=0;j<s;j++)												
			{	
				printf(" *");
			}
		}
		else
		{
			printf(" *");
			for(t=0;t<(s-2)*2;t++)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

int M()
{
	int i,j,n=5,t,s,k=0,g=0;														
	s=4;	
	for(i=0;i<n;i++)
	{	
		printf(" *");
		for(t=0;t<(s-n/2)*2;t++)
		{
			if(t==i&&t!=0&&t<(s-n/2))
			{
				printf("*");	
			}		
			printf(" ");
			if(i==n/2&&t==(s-n/2))
				printf("* ");
			if(t==((s-n/2)*2)-i&&t!=0&&t>(s-n/2))
			{
				printf("*");	
			}

		}
		if(i==0 || i>n/2)
			printf("  ");
		printf(" *");
		printf("\n");
	}
	return 0;
}

int N()
{
	int i,j,n=5,t,s,k=0,g=0;														
	s=4;		
	for(i=0;i<n;i++)
	{	
		printf(" *");
		for(t=0;t<(s-n/2)*2;t++)
		{
			if(t==i&&t!=0&&t!=n)
			{
				printf("*");	
				continue;
			}		
			printf(" ");

		}
		printf(" *");
		printf("\n");
	}
	return 0;
}

int O()
{
	int i,j,n=5,t,s,k=0;														
	s=4;	
	for(i=0;i<n;i++)
	{

		if(i==0 || i==n-1 )
		{		
			printf("  ");
			for(j=0;j<s-2;j++)												
			{	
				printf(" *");
			}
			printf(" ");
		}
		else
		{
			printf(" *");
			for(t=0;t<(s-2)*2;t++)
			{
				printf(" ");
			}
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}

int P()
{
	int i,j,n=5,t,s,k=0;														
	s=4;	
	for(i=0;i<n;i++)
	{
		if(i==0 || i==n/2)
		{		
			for(j=0;j<s;j++)												
			{	
				printf(" *");
			}
		}
		else
		{
			printf(" *");
			for(t=0;t<(s-2)*2;t++)
			{
				printf(" ");
			}
			if(i<n/2)
				printf(" *");
		}
		printf("\n");
	}
	return 0;
}

int Q()
{
	int i,j,n=5,t,s,k=0;														
	s=4;	
	for(i=0;i<n;i++)
	{

		if(i==0 || i==n-1 )
		{		
			printf("  ");
			for(j=0;j<s-2;j++)												
			{	
				printf(" *");
			}
			printf(" ");
		}
		else
		{
			printf(" *");
			for(t=0;t<(s-2)*2;t++)
			{
				printf(" ");
			}
			printf(" *");
		}
		if(i==n-1)
			printf("  *");
		printf("\n");
	}
	return 0;
}

int R()
{
	int i,j,n=5,t,s,k=0;														
	s=4;	
	for(i=0;i<n;i++)
	{

		if(i==0|| i==n/2)
		{		
			for(j=0;j<s-1;j++)												
			{	
				printf(" *");
			}
		}
		else
		{
			printf(" *");
			for(t=0;t<(s-2)*2;t++)
			{
				printf(" ");
			}
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}

int S()
{
	int i,j,n=5,t,s,k=0;														
	s=4;	
	for(i=0;i<n;i++)
	{
		if(i==0 || i==n-1 )
		{	if(i==0)	
			printf(" ");
			for(j=0;j<s;j++)												
			{	
				printf(" *");
			}
		}
		else if(i==n/2)
		{
			printf("  *");
			for(j=0;j<s-2;j++)												
			{	
				printf(" *");
			}			
		}
		else
		{
			if(i<n/2)			
				printf(" *");
			else
				printf("  ");
			for(t=0;t<(s-2)*2;t++)
			{
				printf(" ");
			}
			if(i>n/2)
				printf("  *");
		}
		printf("\n");
	}
	return 0;
}


int T()
{
	int i,j,n=5,t,s,k=0;														
	s=4;		
	for(i=0;i<n;i++)
	{
		if(i==0 )
		{		
			for(j=0;j<s;j++)												
			{	
				printf(" *");
			}
		}
		else
		{
			for(t=0;t<(s-2)+1;t++)
			{		
				printf(" ");
			}
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}

int U()
{
	int i,j,n=5,t,s,k=0;														
	s=4;		
	for(i=0;i<n;i++)
	{

		if( i==n-1)
		{	printf(" ");	
			for(j=0;j<s-1;j++)												
			{	
				printf(" *");
			}
		}
		else
		{
			printf(" *");
			for(t=0;t<(s-2)*2;t++)
			{
				printf(" ");
			}
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}

int V()
{
	int i,j,n=5,t,s;														
	s=4;	
	for(i=0;i<n;i++)
	{
		for(t=1;t<=i;t++)
		{
			printf(" ");
		}	
		printf(" *");	
		for(j=1;j<(s-i)*2;j++)												
		{	
			printf(" ");
		}
		if(i!=n-1)
		printf("*");
		printf("\n");
	}
	for(i=0;i<n;i++)
		printf(" ");
	printf(" \n");
	return 0;
}

int W()
{
	int i,j,n=5,t,s,k=0,g=0,y=2;														
	s=4;		
	for(i=0;i<n;i++)
	{	
		printf(" *");
		for(t=0;t<(s-n/2)*2;t++)
		{
			if(t==i&&t!=0&&t!=n&&i>n/2)
			{
				printf("*");	
				continue;
			}
			if(i==n/2&&t==i)
			{
				printf("*");
				continue;	
			}
			if(t==i-y&&i!=n-1&&t!=n&&i>n/2)
			{
				printf("*");
				y+=2;	
				continue;
			}		
			printf(" ");

		}
		printf(" *");
		printf("\n");
	}
	return 0;
}

int X()
{
	int i,j,n=7,t,s,k=0,g=0;														
	s=6;
	printf("\n\tX\n\n");		
	for(i=0;i<n;i++)
	{	
		for(t=0;t<(s-n/2)*2;t++)
		{
			if(t==i&&t!=0)
			{
				printf("*");	
			}

			if(t==((s-n/2)*2)-i&&t!=(99-n/2))
			{
				printf(" *");	
				continue;
			}	
			else	
				printf(" ");
			if(i==n-1&&t==(s-n/2)+2)
				printf(" *");

		}
		printf("\n");
	}
	return 0;
}



int Y()
{
	int i,j,n=6,t,s,k=0,g=0;														
	s=6;	
	for(i=0;i<n;i++)
	{	
		for(t=0;t<(s-n/2)*2;t++)
		{
			if(t==i&&t!=0&&i<=n/2)
			{
				printf("*");	
			}
			if(t==n/2&&i>n/2)
				printf(" *");	
			if(t==((s-n/2)*2)-i&&i<=n/2)
			{
				printf(" *");	
				continue;
			}	
			else	
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}


int Z()
{
	int i,j,n=5,t,s,k=0,l=0;														
	s=4;	
	for(i=0;i<n;i++)
	{
		if(i==0 || i==n-1)
		{		
			for(j=0;j<s;j++)												
			{	
				printf(" *");
			}
		}
		else
		{
			for(t=0;t<(s-2)*2;t++)
			{

				if(t==(s-2)*2-i-l)
				{
					printf("  *");
					l++;				
					continue;
				}			
				else
					printf(" ");
				if(i==n-2&&t==0)
					printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
int main()
{
	int i=0;
	int (*funptr[])()={A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z};
	char Name[10];
	printf("\nEneter you Name:");
	scanf("%s",&Name);
	for(i=0;i<strlen(Name);i++)	
	{
		int a=Name[i];
		(*funptr[a-97])();
		printf("\n");
	}
	return 0;
}

