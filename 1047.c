#include<stdio.h>
#define MAXN 10000+1
int main()
{
	int N;
	scanf("%d",&N);
	int team[MAXN]={};
	int i;
	for(i=0;i<N;i++){
		int t,p,s;
		scanf("%d-%d %d",&t,&p,&s);
		team[t]+=s;
	}
	int max=0;
	for(i=0;i<MAXN;i++){
		if(team[i]>team[max]){
			max=i;
		}
	}
	printf("%d %d\n",max,team[max]);
	return 0;
}
