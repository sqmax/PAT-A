#include<stdio.h>
#define N 1000
int main()
{
	
	int a[N],b,i=0,t;
	char c;
	while((c=getchar())!=' '){
		a[i++]=c-'0';
	}
	t=i;
	scanf("%d",&b);
	int carry=0;//保存上一位数的余数，并加权后加到下一位数 
	for(i=0;i<t;i++){
		if(i!=0||a[i]/b!=0){
			printf("%d",(10*carry+a[i])/b);
		}
		carry=(10*carry+a[i])%b; 
	}
	if(t==1&&a[0]/b==0){
		printf("0");
	}
	printf(" %d",carry);
	return 0;
 } 
