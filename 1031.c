#include<stdio.h>

int check(char a[]);
int F(int sum);
int main(){
	int n;
	scanf("%d",&n);
	char a[n][18];
	int i;
	for(i=0;i<n;i++){
		gets(a[i]);
	}
	int cnt=0;
	for(i=0;i<n;i++){
		if(check(a[i])){
			cnt++;
		};
	}
	if(cnt==n){
		printf("All passed\n");
	}
	return 0;
}
int check(char a[]){
	int i;
	int weight[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int Z[]={0,1,2,3,4,5,6,7,8,9,10};
	char M[]={'1' ,'0' ,'X' ,'9' ,'8' ,'7' ,'6' ,'5' ,'4' ,'3', '2'};
	int flag=1;
	for(i=0;i<17;i++){
		if(a[i]<'0'||a[i]>'9'){
			flag=0;
			break;
		}
	}
	char m;
	int sum=0;
	if(flag==1){
		for(i=0;i<17;i++){
			sum+=(a[i]-'0')*weight[i];
		}
		int t=F(sum);
		for(i=0;i<11;i++){
			if(t==Z[i]){
				m=M[i];break;
			}
		}
		if(m!=a[17]){
			flag=0;
		}
		
	}
	if(flag==0){
		printf("%s@@@\n",a);
	}
	return flag;
}
int F(int sum){
	while(sum>=11){
		sum/=11;
	}
	return sum;
}
