#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i,j,s,a[n];
	s=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j) continue;
			s+=a[i]*10+a[j];
//			printf("%d ",a[i]*10+a[j]);
		}
	}
	printf("%d\n",s);
	
	return 0;
}
