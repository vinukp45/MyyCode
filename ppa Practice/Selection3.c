#include<stdio.h>

int main()
{
	int Standard = 0;
	
	printf("Primary \n");
	printf("Devision : \n");
	scanf("%d",&Standard);
	
	switch (Standard)
	{
		case 1:
			printf("Your exam 1 pm\n");
			break;
		case 2:
			printf("Your exam 2 pm\n");
			break;
		case 3:
			printf("Your exam 3 pm\n");
			break;
		case 4:
			printf("Your exam 4 pm\n");
			break;
		default:
			printf("Invalide standard \n");
			break;
			
	}
	return 0; 
}
