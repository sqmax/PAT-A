#include<stdio.h>

typedef struct{
	int day;//表示观察的天数 
	int low_day;//表示观察期中，低于闸值的天数 
}House;
int main()
{
	int N;
	float e;
	int D;
	scanf("%d %f %d",&N,&e,&D);
	House hou[N];
	int i,j;
	for(i=0;i<N;i++){
		hou[i].low_day=0;
		int K;
		float E;
		scanf("%d",&K);
		hou[i].day=K;
		for(j=0;j<K;j++){ 
			scanf("%f",&E);
			if(E<e){
				hou[i].low_day++;
			}
		}	
	}
	int pro_emp=0,emp=0;
	for(i=0;i<N;i++){
		if(hou[i].low_day>hou[i].day/2){
			pro_emp++;
			if(hou[i].day>D){
				emp++;
			}
			
		}
	}
	pro_emp-=emp;
	printf("%.1f%% %.1f%%\n",pro_emp*100.0/N,emp*100.0/N);
	return 0;
}
