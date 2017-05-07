#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	char broken[100];
	gets(broken);
	int flag=0;
	if(strchr(broken,'+')){
		flag=1;
	}
	char c;
	int i;
	int len=strlen(broken);
	while((c=getchar())!='\n'){
		for(i=0;i<len;i++){
			if(c==broken[i]||fabs(c-broken[i])==32)
				break;
		}
//		if(c>='A'&&c<='Z'&&flag==1){
//			;
//		}else if(i==strlen(broken)){
//			printf("%c",c);cnt++;
//		}
		if(i==len){
			if(flag==1&&(c>='A'&&c<='Z')){
				;
			}else{
				printf("%c",c);
			}
		}
	}
	printf("\n");
	return 0;
}
