#include<stdio.h>
int cmp(const void* a,const void* b){
	return *(int*)a-*(int*)b;//返回若小于0，a排在b前面，则升序；若大于0，b排在a前面，则降序 
}
int main()
{
	int N;
	scanf("%d",&N);
	int a[N];                                                                                         
	int i;
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	qsort(a,N,sizeof(a[0]),cmp);
//	for(i=0;i<N;i++){
//		printf("%d ",a[i]);
//	}
//	printf("\n");
	int E,flag=0;
	for(i=0;i<N;i++){
		E=N-i;
		if(a[i]>E){
			flag=1;
			break;
		}
	}
	printf("%d\n",flag?E:0);
	return 0;
}
