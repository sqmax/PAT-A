#include<stdio.h>

void sort(int a[],int n);
int main()
{
	int i,n,a[4];
	scanf("%d",&n);
	do{
		for(i=0;i<4;i++){
			a[i]=n%10;
			n/=10;
		}
		sort(a,4);
		int min=0,max=0;
		for(i=0;i<4;i++){
			min=min*10+a[i]; 
		}
		for(i=3;i>=0;i--){
			max=max*10+a[i];
		}
		printf("%04d - %04d = %04d\n",max,min,max-min);
		n=max-min;
	}while(n!=6174&&n!=0);
	return 0;
}
//冒泡排序，从小到大 
void sort(int a[],int n){
	int i,j,t;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}

