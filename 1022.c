#include<stdio.h>

int main()
{
	int a,b,d;
	scanf("%d %d %d",&a,&b,&d);
	int mask=1;
	int x=a+b;
	while(x/=d){
		mask*=d;
	}
	x=a+b;
	while(mask){
		printf("%d",x/mask);
		x%=mask;
		mask/=d;
	}
	return 0;
 } 
//int main()
//{
//	int a,b,d;
//	scanf("%d %d %d",&a,&b,&d);
//	int i,x,cnt=0,array[100];
//	x=a+b;
//	i=0;
//	while(x>0){
//		array[i]=x%d;
//		x/=d;
//		cnt++;
//		i++;
//	}
//	for(i=cnt-1;i>=0;i--){
//		printf("%d",array[i]);
//	}
//	printf("\n");
//	return 0;
//	
//}
