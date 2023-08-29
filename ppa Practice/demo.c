#include<stdio.h>
int Addition (int no1 , int no2)
{
	int utar = 0;
	utar = no1 + no2;
	return utar;
}

int Substraction(int Data1 , int Data2)
{
	int Result = 0;
	Result = Data1 + Data2;
	return Result;
}
int main()
{
	int Val1 = 022 , Val2 = 20;
	int Ans = 0;
	
	
	Ans = Addition(Val1 , Val2);
	printf("Addition is : %d\n",Ans);
	
	Ans = Substraction(Val1 , Val2);
	printf("Substraction is : %d\n",Ans);
	
	return 0;
}
