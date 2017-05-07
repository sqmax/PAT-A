#include<stdio.h>
#define swap(a,b) a^=b,b^=a,a^=b
void rightShift(int a[],int n,int m);
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
//	swap(a[2],a[3]);
//	for(i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
	m%=n;
//	printf("%d",a[0]);
	rightShift(a,n,m);
	for(i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
	printf("%d\n",a[n-1]);
	return 0;
}
void rightShift(int a[],int n,int m){
	int i,j;
	for(i=0,j=n-1;i<j;i++,j--){
		swap(a[i],a[j]);
	}
	for(i=0,j=m-1;i<j;i++,j--){
		swap(a[i],a[j]);
	}
	for(i=m,j=n-1;i<j;i++,j--){
		swap(a[i],a[j]);
	}
	
}
//#include<stdio.h>
//
//void swap(int* a,int* b);
//int main()
//{
//	int n,m;
//	scanf("%d %d",&n,&m);
//	int a[n];
//	int i;
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(i=0;i<n/2;i++){
//		swap(&a[i],&a[n-1-i]);
//	}
//	for(i=0;i<m/2;i++){
//		swap(&a[i],&a[m-1-i]);
//	}
//	for(i=m;i<(n-m)/2+m;i++){
//		swap(&a[i],&a[n-1-i]);
//	}
//	for(i=0;i<n;i++){
//		if(i<n-1){
//			printf("%d ",a[i]);
//		}else{
//			printf("%d\n",a[i]);
//		}
//	}
//	return 0;
//}
//void swap(int* a,int* b)
//{
//	int t=*a;
//	*a=*b;
//	*b=t;
//	
//}
