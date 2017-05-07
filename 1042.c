#include<stdio.h>
#define N 'z'+1
int max(int count[]);
int main(){
	int count[N]={};
	char c;
	int i;
	while((c=getchar())!='\n'){
		if(c>='A'&&c<='Z'){
			count[c+32]++;
		}else if(c>='a'&&c<='z'){
			count[c]++;	
		}
	}
	int m=max(count);
	printf("%c %d\n",m,count[m]);
	return 0;
} 
int max(int count[]){
	int i,j,rnt=0,max=count[65];
	for(i='a';i<='z';i++){
		if(max<count[i]){
			max=count[i];
			rnt=i;
		}
	}
	return rnt;
}
