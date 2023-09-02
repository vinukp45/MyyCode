#include<stdio.h>

int main()
{
	int a = 12;
	int b = 12;
	int c = 13;
	int d = 13;
	
	a++;
	++b;
	
	c--;
	--d;
	
	printf("%d\n",a);
	printf("%d\n", b);
	
	printf("%d\n",c);
	printf("%d\n",d);
	
	return 0 ; 
}
