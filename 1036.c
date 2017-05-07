#include<stdio.h>

int main(){
	int n;
	char c;
	scanf("%d %c",&n,&c);
	int row=n/2;
	int t=n*10/2-n/2*10;
	if(t>=5){
		row++;
	}
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<n;j++){
			if(i==0||i==row-1||j==0||j==n-1){
				printf("%c",c);
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
