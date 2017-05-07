#include <stdio.h>

int main()
{
	int n,res=0;
	scanf("%d",&n);
	while(n!=1){
		if(n%2==0){
			n/=2;res++;
		}else{
			n=(3*n+1)/2;res++;
		}
	}
	printf("%d",res);
	return 0;
}
