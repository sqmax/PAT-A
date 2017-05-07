#include<stdio.h>
#define MAX 100000+10
typedef struct{
	int address,data,next,order;
}Node;
//void sort(Node node[],int n){
//	 int i,j;
//	 for(i=0;i<n-1;i++){
//	 	for(j=0;j<n-i-1;j++){
//	 		if(node[j].order>node[j+1].order){
//	 			Node t=node[j];
//	 			node[j]=node[j+1];
//	 			node[j+1]=t;
//			 }
//		 }
//	 }
//}
int main()
{
	int head,N,K;
	scanf("%d %d %d",&head,&N,&K);
	Node node[MAX];
	int i;
	for(i=0;i<N;i++){
		int address,data,next;
		scanf("%d %d %d",&address,&data,&next);
		node[address].address=address;
		node[address].data=data;
		node[address].next=next;
	}
	int p=head,cnt=0;
	Node node2[N];
	i=0;
	while(p!=-1){
		node[p].order=cnt++;
		node2[i++]=node[p];
		p=node[p].next;
	}
	node2[i-1].next=-1;
	for(i=K-1;i>0;i--){
		printf("%05d %d %05d\n",node2[i].address,node2[i].data,node2[i-1].address);
	}
	printf("%05d %d %05d\n",node2[0].address,node2[0].data,node2[K].address);
	for(i=K;i<N-1;i++){
		printf("%05d %d %05d\n",node2[i].address,node2[i].data,node2[i+1].address);
	}
	printf("%05d %d -1\n",node2[i].address,node2[i].data);
//	printf("%d %d %d\n",node[N-1].address,node[N-1].data,node[N])
	
}

