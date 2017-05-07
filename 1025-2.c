#include<stdio.h>
#define MAX 100000+10
typedef struct{
  int address,data,next;
}Node;

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
	  int p=head;
	  Node node2[N];
	  i=0;
	  while(p!=-1){
	    node2[i++]=node[p];
	    p=node[p].next;
	  }
	int j;
	for(i = 0; i < N / K; ++i){
		for(j = (i+1)*K-1; j > i*K; --j){
			printf("%05d %d %05d\n", node2[j].address, node2[j].data, node2[j-1].address);
		}
		printf("%05d %d ", node2[i*K].address, node2[i*K].data);
		if(i < N/K-1){//若不是最后一轮 
			printf("%05d\n", node2[(i+2)*K-1].address);
		}else{//是最后一轮 
			if(N % K == 0){//全部逆转 
				printf("-1\n");
			}else{//还余下数字没有逆转 
				printf("%05d\n", node2[(i+1)*K].address);
				for(j = (i+1)*K; j < N; ++j){
					printf("%05d %d ", node2[j].address, node2[j].data);
					if(j < N-1)
						printf("%05d\n", node2[j+1].address);
					else
						printf("-1\n");
				}
			}
		}
	}  
	return 0;
}
