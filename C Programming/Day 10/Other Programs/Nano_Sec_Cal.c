#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<sys/time.h>
#include<unistd.h>
#include<string.h>
int main()
{
	struct timespec start,stop;
	clock_gettime(CLOCK_MONOTONIC,&start);

	printf("a\n");
	clock_gettime(CLOCK_MONOTONIC,&stop);
	int TotalTimeTaken = ((stop.tv_sec*1000000000)+stop.tv_nsec)-((start.tv_sec*1000000000)+start.tv_nsec);
	printf("calculate Time taken for file load into structure %d\n\n",TotalTimeTaken);
}
