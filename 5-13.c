#include<stdio.h>
int main()
{
	int A,B,C,Sum=0,i=0;
	scanf("%d%d",&A,&B);
	C=A;
	while(C<=B)
	{
		printf("%5d",C);
		C++;
		i++;
		if(i%5==0)
		{
			printf("\n");
		}
		
	}
	printf("\n");
	C=A;
	while(C<=B)
	{
		Sum+=C;
		C++;
	}
	printf("Sum = %d",Sum);
	return 0;
}
