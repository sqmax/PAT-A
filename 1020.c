#include<stdio.h>
typedef struct{
	double stock,cost;
	double price;
}Mooncake;
 void sort(Mooncake a[],int n){//按月饼单价从大到小排序 
 	int i,j;
 	for(i=0;i<n-1;i++){
 		for(j=0;j<n-1-i;j++){
 			if(a[j].price<a[j+1].price){
 				Mooncake t=a[j];
 				a[j]=a[j+1];
 				a[j+1]=t;
			 }
		 }
	 }
 }
int main()
{
	int N,D;
	scanf("%d %d",&N,&D);
	Mooncake mc[N];
	int i;
	for(i=0;i<N;i++){
		scanf("%lf",&mc[i].stock);
	}
	for(i=0;i<N;i++){
		scanf("%lf",&mc[i].cost);
		mc[i].price=mc[i].cost/mc[i].stock;
	}
	sort(mc,N);
	double sum=0;
	i=0;
	for(i=0;i<N;i++){
		if(D>=mc[i].stock){//某种月饼库存不能满足需求 
			sum+=mc[i].cost;
			D-=mc[i].stock;
		}else{
			sum+=mc[i].price*D;break;//某种月饼能够满足需求 
		}
	}
	printf("%.2f\n",sum);
	return 0;
 } 

