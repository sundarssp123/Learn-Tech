#include<stdio.h>
#include<stdlib.h>
unsigned GetBit(unsigned iNum,unsigned iPos, unsigned iNoBits)
{
	return ((iNum>>iPos) & ~(~0<<iNoBits));

//	return ((iNum<<31-iPos) >> 32-iNoBits);
}
int main()
{
	unsigned int iNum =9,iPos=0;
	printf("%d",GetBit(iNum, iPos,4));
	return 0;

}
