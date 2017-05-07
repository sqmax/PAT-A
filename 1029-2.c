#include<stdio.h>

void toUpperCase(char* s);
int push(char ch,char* broken,int cnt);
int main()
{
	char in[81],out[81],broken[81]={};
	gets(in);
	gets(out);
	toUpperCase(in);
	toUpperCase(out);
	int i,j,cnt=0;
	for(i=0,j=0;in[i];){
		if(in[i]!=out[j]){
			cnt=push(in[i],broken,cnt);
			i++;
		}else{
			i++;
			j++;
		}
	}
	puts(broken);
	return 0;	
}
void toUpperCase(char* s){
	int i;
	for(i=0;s[i];i++){
		if(s[i]>='a'&&s[i]<='z'){
			s[i]=s[i]-32;
		}
	}
}
int push(char ch,char* broken,int cnt){
	int i;
	for(i=0;broken[i];i++){
		if(ch==broken[i]) return cnt;
	}
	broken[i]=ch;
	return cnt+1;
}
