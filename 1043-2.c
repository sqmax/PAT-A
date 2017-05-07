#include<stdio.h>
#include<string.h>
int main()
{
	int count[128]={};
	char ch[6]={'P','A','T','e','s','t'};
	char str[10010];
	gets(str);
	int len=strlen(str);
	int i;
	for(i=0;i<len;i++){
		count[str[i]]++;
	} 
	while(1){
		int flag=1;
		for(i=0;i<6;i++){
			if(count[ch[i]]){
				printf("%c",ch[i]);
				count[ch[i]]--;
				flag=0;
			}
		}
		if(flag) break;
	}
	return 0;
}
