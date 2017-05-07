#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n;
	scanf("%d",&n);
	char name[n][6],birth[n][11];
	int min,max;
	char* bir_min=malloc(11),*bir_max=malloc(11);
//	printf("%d %d\n",strcmp(bir_min,"2001/05/12"),strcmp(bir_max,"2001/05/12"));
//	bir_min=bir_max="1814/09/06";
	int i,cnt=0;
	for(i=0;i<n;i++){
		scanf("%s %s",name[i],birth[i]);
		if(strcmp(birth[i],"2014/09/06")>0||strcmp(birth[i],"1814/09/06")<0){
			continue;
		}else{
			if(cnt==0){
				strcpy(bir_min,birth[i]);//将第一个合法的信息赋值给相应变量 
				strcpy(bir_max,birth[i]);
				min=max=i;
			}
			if(strcmp(bir_min,birth[i])>0){
				min=i;
				strcpy(bir_min,birth[i]);
			}
			if(strcmp(bir_max,birth[i])<0){
				max=i;
				strcpy(bir_max,birth[i]);
			}
			cnt++;
		}
	}
	free(bir_min);
	free(bir_max);
	if(cnt){
		printf("%d %s %s\n",cnt,name[min],name[max]);	
	}else{
		printf("0\n");
	}
	
	return 0;
}

