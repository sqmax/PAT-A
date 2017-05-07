#include<stdio.h>
#include<string.h>
int main()
{
	char a[1001],b[1001];
	int table['z'+1]={};
	gets(a);
	gets(b);
	int i;
	for(i=0;i<strlen(a);i++){
		table[a[i]]++;
	}
	for(i=0;i<strlen(b);i++){
		table[b[i]]--;
	}
	int ans=0;//表示缺少的个数 
	for(i=0;i<'z';i++){
		if(table[i]<0){
			ans-=table[i];
		}
	}
	if(ans){
		printf("No %d\n",ans);
	}else{
		printf("Yes %d\n",strlen(a)-strlen(b));
	}
	return 0;
 } 
