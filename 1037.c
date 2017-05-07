#include<stdio.h>

int main()
{
	int a1,b1,c1;
	int a2,b2,c2;
	int a3,b3,c3;
	scanf("%d.%d.%d",&a1,&b1,&c1);
	scanf("%d.%d.%d",&a2,&b2,&c2);
	int change=a2*17*29+b2*29+c2-(a1*17*29+b1*29+c1);
	if(change<0){
		change=0-change;
		printf("-");
	}
	a3=change/(17*29);
//	b3=(change-a3*17*29)/29;
	b3=change%(17*29)/29;
	c3=change%29;
	printf("%d.%d.%d",a3,b3,c3);
	
	return 0;
}


