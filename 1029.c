#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 81

int main()
{
	char in[N],ch;
	gets(in);
//	gets(out);
	int i,j;
	for(ch=getchar();ch!='\n';){
		for(i=0;i<strlen(in);i++){
			if(ch==in[i]) in[i]='#';//#代表好键 
		}
		ch=getchar();
	}
	for(i=0;i<strlen(in)-1;i++){
		if(in[i]=='#') continue;
		for(j=i+1;j<strlen(in);j++){
			if((in[i]==in[j]||fabs(in[i]-in[j])==32)){
				in[j]='#';//#代表重复怀键 
			}
		}
	}
	for(i=0;i<strlen(in);i++){
		if(in[i]!='#'){
			if(in[i]>='a'&&in[i]<='z') in[i]-=32;
			putchar(in[i]);
		}	
	}
	
	return 0;
}

