#include<stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int a[x/2];
	int flag=0;
	int i,j=0;
	int t;
	for(t=3;t<x;t++){
		for(i=2;i<t;i++){
			if(t%i==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			a[j++]=t;
		}		
		flag=0;
	}
//	int c=j;
//	for(j=0;j<c;j++){
//		printf("%d ",a[j]);
//	}
//	printf("\n");
	int count=0;
	for(i=0;i<j;i++){
		if(a[i+1]-a[i]==2){
			count++;
			printf("(%d %d)",a[i],a[i+1]);
		}	
	}
	printf("%d\n",count);
		
	return 0;
}
