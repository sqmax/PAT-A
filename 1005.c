#include<stdio.h>

int push(int x,int overload[],int cnt){//求被x覆盖的数，并放入数组里，个数为cnt 
 	 int i,flag=0;
	 while(x!=1){
	 	for(i=0;i<cnt;i++){
	 		if(x==overload[i]) return cnt;//若数组中已存在x,则结束 
		 }
		 if(flag) overload[cnt++]=x;//x的最初值不会放入数组里 
		if(x%2==0) x/=2;
		else x=(3*x+1)/2;
		flag=1;
	 }
	 return cnt;
 }
 void sort(int key[],int n){//冒泡排序，从大到小 
 	int i,j,t;
 	for(i=0;i<n;i++){
 		for(j=0;j<n-i-1;j++){
 			if(key[j]<key[j+1]){
 				t=key[j];
 				key[j]=key[j+1];
 				key[j+1]=t;	
			 }
		 }
	 }
 }
int main()
{
	int k;
	scanf("%d",&k);
	int overload[1000],cnt=0;
	int i,j,t=0,a[k],key[k];
	for(i=0;i<k;i++){
		scanf("%d",&a[i]);
		cnt=push(a[i],overload,cnt);
	}
	for(i=0;i<k;i++){
		for(j=0;j<cnt;j++){
			if(a[i]==overload[j]) break;
		}
		if(j==cnt){
//			printf("%d ",a[i]);
			key[t++]=a[i];
		}
	}
	sort(key,t);
	for(i=0;i<t;i++){
		if(!i) printf("%d",key[i]);
		else printf(" %d",key[i]);
	}
	return 0;
 } 
 
