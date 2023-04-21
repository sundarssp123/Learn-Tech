#include <stdio.h>

int max(int a, int b)
{
	return a<b? b:a;
}

int main()
{
	int maxx ,a1[] = {9,2,8,1,3,5,6,7,3,1,1,6} , a2[] = {7,8,4,6,2,1,9,9,7} ,tcur , ans[12] = {}, a1size = 12 , a2size = 9 , a1cur , a2cur , top[12] = {} , i , maxsize = max(a1size , a2size);
	a1cur = a1size - 1;
	a2cur = a2size - 1;
	tcur = maxx = max(a1cur , a2cur);
	while(a1cur+1&&a2cur+1)
	{
		ans[tcur]    =(a1[a1cur]+a2[a2cur]+top[tcur])%10;
		top[tcur - 1]=(a1[a1cur]+a2[a2cur]+top[tcur])/10;
		a1cur-- , a2cur-- , tcur--;
	}
#if 1
	if(a1size>a2size)
	{
		while(a1cur+1)
		{
		ans[tcur]    =(a1[a1cur]+top[tcur])%10;
		top[tcur - 1]=(a1[a1cur]+top[tcur])/10;
			a1cur--;
			tcur--;
		}
	}
	else
	{
		while(a2cur+1)
		{
		ans[tcur]    =(a2[a2cur]+top[tcur])%10;
		top[tcur - 1]=(a2[a2cur]+top[tcur])/10;
			a2cur--;
			tcur--;
		}
	}
#endif
	printf("\n");
	printf("\n");
	for(i=0;i<=maxx;i++)
	{
		printf("%d " , ans[i]);
	}
	printf("\n");
	return 0;
}
