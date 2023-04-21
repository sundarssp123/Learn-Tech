#include<stdio.h>
#include<math.h>
int main()
{
	double i,j,result,res;
	for(i=1;i<100;i++)
		for(j=1;j<100;j++)
		{
			res = pow(i,2)+pow(j,2);
			result = sqrt(res);
			if((result-floor(result))==0)
				printf("%lf\t%lf\t%lf\n",i,j,result);			
		}
}

