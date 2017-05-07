#include<stdio.h>
#include<string.h>
int main(){
	char broken[100],input[100001];
	int mark[128]={};
	gets(broken);
	gets(input);
	int i;
	int len1=strlen(broken);
	int len2=strlen(input);
	for(i=0;i<len1;i++){
		if(broken[i]=='+'){
			char c;
			for(c='A';c<='Z';c++){
				mark[c]=1;
			}
		}else if(broken[i]>='A'&&broken[i]<='Z'){
			mark[broken[i]]=1;
			mark[broken[i]+32]=1;
		}else if(broken[i]>='a'&&broken[i]<='z'){
			mark[broken[i]]=1;
			mark[broken[i]-32]=1;
		}else{
			mark[broken[i]]=1;
		}
	}
	for(i=0;i<len2;i++){
		if(!mark[input[i]]){
			printf("%c",input[i]);
		}
	}
	printf("\n");
	return 0;
}
