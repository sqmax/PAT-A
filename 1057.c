#include<stdio.h>
int main()
{
	char c;
	int sum=0;
	while((c=getchar())!='\n'){
		if(c>='a'&&c<='z'){
			sum+=c-'a'+1;
		}
		if(c>='A'&&c<='Z'){
			sum+=c-'A'+1;
		}
	}
//	printf("%d",sum);
	int t=sum,mask=1;
	int d,s1=0,s0=0;
	while(t/=2){
		mask*=2;
	}
	do{
		d=sum/mask;
		sum%=mask;
		mask/=2;
		if(d) s1++;
		else s0++;
	}while(mask);
	
	printf("%d %d\n",s0,s1);
	return 0;	
}
