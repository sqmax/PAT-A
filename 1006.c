#include<stdio.h>

void print(int t,int count);
int main()
{
	int x;
	scanf("%d",&x);
	int t=x;
	int count=1;
	while(t>9){
		t/=10;
		count*=10;
	}
	//printf("%d",count);
	
	while(count>9){
		t=x/count;
		print(t,count);
		x%=count;
		count/=10;
//		if(count=10) break;
	}
	int i;
	for(i=1;i<=x;i++){
		printf("%d",i);
	}	
	
	return 0;
	
}
void print(int t,int count){
	int i;
	if(count==100){
		for(i=0;i<t;i++){
			printf("B");
		}
	}else{
		for(i=0;i<t;i++){
			printf("S");
	
		}
	}
}
