#include<stdio.h>
#include<string.h>

int main()
{
	char str[100001];
	gets(str);
	long numT=0,numAT=0,numPAT=0;
	int i;
	for(i=strlen(str)-1;i>=0;i--){
		if(str[i]=='T'){
			numT++;
		}else if(str[i]=='A'){
			numAT+=numT;
		}else{
			numPAT+=numAT;
		}
	}
	printf("%d",numPAT%1000000007);
	
	return 0;
}
//PPPAAATTPPAAATTTTTT
