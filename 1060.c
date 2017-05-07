#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b)
{
    return *(int *)a-*(int *)b;
}
int main()
{
	int N;
	scanf("%d",&N);
	int a[N];
	int i,j;
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	if(N==1){
		if(a[0]>1){
			printf("1\n");
			return 0;
		}else{
			printf("0\n");
			return 0;
		}
	}
	qsort(a,N,sizeof(a[0]),cmp);
	for(i=0;i<N;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	int E=0;
	for(i=0;i<N;i++){
		for(j=i+1;j<N;j++){
			if(a[j]!=a[i]){
				if(a[j]>N-j&&N-j>E){
					E=a[i];
				}
			}
		}
		if(E>N/2) break;
	}
	printf("%d\n",E);
	return 0;
}

