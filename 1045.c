#include<stdio.h>

int main()
{
	int N;
	int a[N],b[N];
	scanf("%d",&N);
	int i,j;
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	int cnt=0,mark[100001]={};
	for(i=0;i<N;i++){
		int t=i,flag=1;
		if(mark[i]!=-1){
			
			for(j=t-1;j>=0;j--){
				if(a[t]<a[j]){
					flag=0;
					mark[j]=-1;
					break;
				}
			}
			for(j=t+1;j<N&&flag;j++){
				if(a[t]>a[j]){
					flag=0;
					mark[j]=-1;
					break;
				}
			}
			if(flag==1){
				b[cnt++]=a[i];
			}
		}
	}
	printf("%d\n",cnt);
	for(i=0;i<cnt;i++){
		if(i==0){
			printf("%d",b[i]);
		}else{
			printf(" %d",b[i]);
		}
	}
	return 0;
}
