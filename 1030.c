#include<stdio.h>

void sort(int* a,int n);
int binarySearch(int x,int* a,int n);
int main()
{
	int n,p;
	scanf("%d %d",&n,&p);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,n);
	int t,from,to=0,max=0;
	for(i=0;i<n;i++){
		t=p*a[i];
		while((to=binarySearch(t,a,n))==-1){
			t--;
		}
		if(max<to-i+1){
			max=to-i+1;
			from=i;
		}
	}
	printf("%d\n",max);
	return 0;
}
void sort(int* a,int n){
	int i,j,t,min;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[min]>a[j]){
				min=j;
			}
		}
		t=a[min];
		a[min]=a[i];
		a[i]=t;
	}
}
int binarySearch(int x,int* a,int n){
	int low=0,top=n-1,mid;
	int i,j;
	mid=(low+top)/2;
	while(low<top){
		if(x>a[mid]){
			low=mid+1;
			mid=(low+top)/2;
		}else if(x<a[mid]){
			top=mid-1;
			mid=(low+top)/2;
		}else{
			return mid;
		}
	}
	return -1;
	
}
