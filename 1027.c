#include<stdio.h>

int main()
{
	int n;
	char c;
	scanf("%d %c",&n,&c);
	int x=1,s=0,row=0,col=0;
	while(s*2-1<n){
		x+=2;
		s+=x;
		row++;
	}
	col=x-2;
//	printf("%d %d\n",col,row);
	int i,j,cnt=0;
	for(i=0;i<row;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(j=0;j<col-2*i;j++){
			printf("%c",c);cnt++;
		}
		printf("\n");
	}
	for(i=1;i<row;i++){
		for(j=0;j<row-i-1;j++){
			printf(" ");
		}
		for(j=0;j<=2*i;j++){
			printf("%c",c);cnt++;
		}
		printf("\n");
	}
	printf("%d\n",n-cnt);
	return 0;
}
