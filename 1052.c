#include<stdio.h>
#include<string.h>

int main()
{
	char a[3][50];
	gets(a[0]);gets(a[1]);gets(a[2]);
	int k;
	scanf("%d",&k);
	char clc[3][20],*ch;//clc代表表情集合，不带[]的，只有表情 
	int i,j,num[k][5];
	for(i=0;i<3;i++){
		for(ch=strchr(a[i],'['),j=0;ch!=NULL;j++){
			clc[i][j]=*(ch+1); 
			ch=strchr(ch+1,'[');
		}
		clc[i][j]='\0';
	}
	int t[k];
	for(i=0;i<k;i++){
		for(j=0;j<5;j++){
			scanf("%d",&num[i][j]);
			
		}
	}
	for(i=0;i<k;i++){
		for(j=0;j<5;j++){
			if(j==0||j==4)
			{
				if(num[i][j]>strlen(clc[0])||num[i][j]<1){
					t[i]=-1;break;
				}else{
					t[i]=0;
				}
			}
			if(j==1||j==3)
			{
				if(num[i][j]>strlen(clc[1])||num[i][j]<1){
					t[i]=-1;break;
				}else{
					t[i]=0;
				}
			}
			if(j==2)
			{
				if(num[i][j]>strlen(clc[2])||num[i][j]<1){
					t[i]=-1;break;
				}else{
					t[i]=0;
				}
			}
				
		}
	}
//	printf("strlen(clc[0]):%d strlen(clc[0]):%d strlen(clc[0]):%d\n",
//		strlen(clc[0]),strlen(clc[1]),strlen(clc[2]));
//	printf("%d %d %d %d\n",t[0],t[1],t[2],t[3]);
//	printf("test:\n");
//	for(i=0;i<3;i++){
//		for(j=0;j<strlen(clc[i]);j++){
//			printf("%c ",clc[i][j]);
//		}
//		printf("\n");
//	}
//	printf(":test\n");
	for(i=0;i<k;i++){
		for(j=0;j<5;j++){
			if(t[i]==-1){
				 printf("Are you kidding me? @\\/@");break;
		  	}else{
		  		if(j==0) printf("%c(",clc[0][num[i][j]-1]);
		  		if(j==4) printf("%c)",clc[0][num[i][j]-1]);
		  		if(j==1||j==3) printf("%c",clc[1][num[i][j]-1]);
		  		if(j==2) printf("%c",clc[2][num[2][j]-1]);
			}
		}
		printf("\n");
	}
	
} 

