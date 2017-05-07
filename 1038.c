#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int count[101]={};
	int i;
	for(i=0;i<n;i++){
		int t;
		scanf("%d",&t);
		count[t]++;
	}	
	int s,flag=1;
	scanf("%d",&s);
	for(i=0;i<s;i++){
		int t;
		scanf("%d",&t);
		if(flag){
			printf("%d",count[t]);
			flag=0;
		}else{
			printf(" %d",count[t]);
		}
		
	}
	return 0;
}
