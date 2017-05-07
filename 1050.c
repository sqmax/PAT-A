#include<stdio.h>
#include<math.h>
void sort(int a[],int n);
int main()
{
	int N;
	scanf("%d",&N);
	int num[N];
	int i,j;
	for(i=0;i<N;i++){
		scanf("%d",&num[i]);
	}
	if(N==1){
		printf("%d\n",num[0]);
		return 0;
	}
	sort(num,N);
	int n,m;
	for(i=sqrt(N*1.0);i<N;i--){
		if(N%i==0){
			n=i;
			m=N/i;
			break;
		}
	}
//	printf("%d %d",n,m); 
	int output[m][n];
	int U=1,L=1;//U,L表示每圈的起始位置，即[1][1],[2][2].... 
	int B=m,R=n;//B,R表示没圈的结束位置，即[m][n],[m-1][n-1]..... 
	int idx=0;
	i=j=1;
	while(idx<N){
		while(idx<N&&j<R){
			output[i][j]=num[idx++];
			j++;
		}
		while(idx<N&&i<B){
			output[i][j]=num[idx++];
			i++;
		}
		while(idx<N&&j>L){
			output[i][j]=num[idx++];
			j--;
		}
		while(idx<N&&i>U){
			output[i][j]=num[idx++];
			i--;
		}
		U++,L++,B--,R--;
		i++,j++;
		if(idx==N-1){
			output[i][j]=num[idx++];
		}
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			printf("%d",output[i][j]);
			if(j!=n){
				printf(" ");
			}else{
				printf("\n");
			}
		}
	}
	return 0;
}
void sort(int a[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]<a[j+1]){
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
