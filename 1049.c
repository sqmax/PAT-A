#include<stdio.h>

int main()
{
	int N;
	scanf("%d",&N);
	int i;
	double num[N];
	for(i=1;i<=N;i++){
		scanf("%lf",&num[i]);
	}
	double t=0,ans=0;
	for(i=1;i<=N;i++){
		t+=i*num[i];
		ans+=t;
//		ans += num[i] * i * (N+1-i);
	}
	printf("%.2lf",ans);
	return 0;
}

