#include<stdio.h>
#include<string.h>

int main(){
	char s[81];
	gets(s);
	int i;
	for(i=strlen(s);i>=0;i--){
		while(i>=0&&s[i]!=' ') i--;
		printf("%s",&s[i+1]);
		if(i>=0){
			s[i]='\0';
			printf(" ");
		}
	}
	return 0;
} 
