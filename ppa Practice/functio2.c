#include<stdio.h>

int Addition(int No1, int No2)
{
	int sum = 0;
	sum = No1 + No2;
	return sum;
}

int Substraction(int No1, int No2)
{
	int sum = 0;
	sum = No1 - No2;
	return sum;
}
int main()
{
	int Value1 = 10;
	int Value2 = 20;
	int Ans = 0;
	
	Ans=Addition(Value1,Value2);
	printf("Addition is : %d\n",Ans);                                 
	
	Ans=Substraction(Value1,Value2);
	printf("Substraction is :%d\n",Ans);
	
	return 0;
}
