#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	int a[t][3];
	int i,j;
	for(i=0;i<t;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
//	for(i=0;i<t;i++){
//		for(j=0;j<3;j++){
//			printf("%d",a[i][j]);
//		}
//	}
//	int count=0;
	for(i=0;i<t;i++){
		
		if(a[i][0]+a[i][1]>a[i][2]){
			printf("Case #%d: true",i+1);
		}else{
			printf("Case #%d: false",i+1);
		}
		if(i!=t-1){
			printf("\n");
		}
	}
	return 0;
}
