#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n][4];
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}
//	for(i=0;i<n;i++){
//		for(j=0;j<4;j++){
//			printf("%d",a[i][j]);
//		}
//	}
	int awin=0,bwin=0;
	for(i=0;i<n;i++){
		if(a[i][0]+a[i][2]==a[i][1]&&a[i][0]+a[i][2]!=a[i][3]){
			awin++;
		}
		if(a[i][0]+a[i][2]==a[i][3]&&a[i][0]+a[i][2]!=a[i][1]){
			bwin++;
		}
	}
	printf("%d %d",bwin,awin);
	return 0;
}
