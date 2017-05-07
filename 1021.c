#include<stdio.h>

void count(int x);
int main(){
	int n;
	scanf("%d",&n);
	count(n);
	return 0;
}
void count(int x){
	int i;
	int a[10];
	for(i=0;i<10;i++){
		a[i]=0;
	}
	while(x>0){
		int d=x%10;
		switch(d){
			case 0:a[0]++;break;
			case 1:a[1]++;break;
			case 2:a[2]++;break;
			case 3:a[3]++;break;
			case 4:a[4]++;break;
			case 5:a[5]++;break;
			case 6:a[6]++;break;
			case 7:a[7]++;break;
			case 8:a[8]++;break;
			case 9:a[9]++;break;
		}
		x/=10;
	}
	for(i=0;i<10;i++){
		if(a[i]!=0){
			printf("%d:%d\n",i,a[i]);
		}
	}
}
