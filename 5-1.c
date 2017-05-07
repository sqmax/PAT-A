#include<stdio.h>

int main()
{
	int a,b,d,p;
	float s;
	scanf("%d%d",&a,&b);
	if(a>=5) p=50;
	else p=30;
	if(b>40)
	{d=1.5*p;
	 s=40*p+(b-40)*d;
	}
	else{d=p;
	s=p*b;
	}
	printf("%.2f",s);

	return 0;
	
}
