#include<stdio.h>

int leap(int x);
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	int x=2,cnt=0,cnt2=0;
	while(cnt<=n){
		if(leap(x)){
			cnt++;
			if(cnt>=m&&cnt<n){
				cnt2++;
				printf("%d",x);
				if(cnt2%10!=0){
					printf(" ");
				}else{
					printf("\n");
				}
			}
			if(cnt==n){
				printf("%d",x);
			}
		}
		x++;
	}
	
	return 0;
}
int leap(int x){
	int flag=1;
	int i;
	for(i=2;i<x;i++){
		if(x%i==0){
			flag=0;break;
		}
	}
	return flag;
}
