#include<stdio.h>

void sort(int* a,int n);
int max(int x,int y);
int main(){
	int n,p;
	scanf("%d %d",&n,&p);
	int num[n],ans=0;
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	sort(num,n);
//	for(i=0;i<n;i++){
//		printf("%d ",num[i]);
//	}
	i=j=0;
	while(i<n&&j<n){
		while(j<n&&num[j]<=num[i]*p){
			ans=max(ans,j-i+1);
			j++;
		}
		i++;
	}
	printf("%d\n",ans);
	
	return 0;
	
}
void sort(int* a,int n){
	int i,j,min;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[min]>a[j]){
				min=j;
			}
		}
		int t=a[min];
		a[min]=a[i];
		a[i]=t;
	}
}
int max(int x,int y){
	if(x<y) x=y;
	return x; 
}
