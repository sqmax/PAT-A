#include<stdio.h>
int cmp(const void* a,const void* b){
	return *(int*)a-*(int*)b;//������С��0��a����bǰ�棬������������0��b����aǰ�棬���� 
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
