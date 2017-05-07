#include<stdio.h>
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
int main()
{
	int n,rank[10000]={},checked[10000]={};
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		int id;
		scanf("%d",&id);
		rank[id]=i+1;
	}
	int k;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		int id;
		scanf("%d",&id);
		if(rank[id]==0){
			printf("%04d: Are you kidding?\n",id);
		}else if(checked[id]){
			printf("%04d: Checked\n",id);
		}else if(rank[id]==1){
			printf("%04d: Mystery Award\n",id);
		}else if(isPrime(rank[id])){
			printf("%04d: Minion\n",id);
		}else{
			printf("%04d: Chocolate\n",id);
		}
		checked[id]=1;
	}
 } 
