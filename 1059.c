#include<stdio.h>
typedef struct{
	int id,grade,flag;
}Student;
int isPrime(int x);
int main()
{
	int n;
	scanf("%d",&n);
	Student rank[n];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&rank[i].id);
		rank[i].grade=i+1;//表示名次 
		rank[i].flag=0;//表示 没被查过 
	}
	int k;
	scanf("%d",&k);
	int t;
	for(i=0;i<k;i++){
		scanf("%d",&t);
		for(j=0;j<n;j++){
			if(t==rank[j].id){
				if(rank[j].flag==1){
					printf("%04d: Checked\n",rank[j].id);
				}else if(rank[j].grade==1){
					printf("%04d: Mystery Award\n", rank[j].id);
				}else if(isPrime(rank[j].grade)){
					printf("%04d: Minion\n",rank[j].id);
				}else{
					printf("%04d: Chocolate\n",rank[j].id);
				}
				rank[j].flag=1;
				break;
			}
		}
		if(j==n){
			printf("%04d: Are you kidding?\n", t);
		}
	}
	return 0;
}
int isPrime(int x){
	int flag=1;
	int i;
	for(i=2;i<x;i++){
		if(x%i==0){
			flag=0;
			break;
		}
	}
	return flag;
}

