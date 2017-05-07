#include<stdio.h>
#include<string.h>

int main()
{
	char a[1001],c;
	gets(a);
	int cnt=0,flag=1;
	int i;
	while((c=getchar())!='\n'){
		for(i=0;i<strlen(a);i++){
			if(c==a[i]){
				a[i]='@';//把已匹配的珠子划掉 
				break;
			}
		}	
		if(i==strlen(a)){//找不到匹配的珠子 
			flag=0;
			cnt++;
		}
	}
	int cnt2=0;
	for(i=0;i<strlen(a)&&flag;i++){
		if(a[i]!='@'){
			cnt2++;
		}
	}
	if(flag){
		printf("Yes %d\n",cnt2);
	}else{
		printf("No %d\n",cnt);
	}
	
	return 0;
}
