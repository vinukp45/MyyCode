#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	if (iNo < 0)
	{
		iNo = -iNo;
	}

	for(iCnt = 1; iCnt <0= iNo; iCnt++)
	{
		printf("%d\n",iCnt);
	}
}
int main()
{
	int iValue = 0;

	printf("Enter thr number \n");

	scanf("%d", &iValue);

	Display(iValue);

	return 0;
}